#include <Arduino.h>

#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "SPIFFS.h"

#include <Adafruit_NeoPixel.h> 
#include <figureRGB.h>

#include "credentials.h"

#define pin_NEO 4

const int brightness = 10;
const int nleds = 256;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(nleds,pin_NEO, NEO_RGB +  NEO_KHZ800);

const char *PARAM_INPUT = "img";
const char *PARAM_INPUT_STATE = "active";
String ledImg;
bool status = false;

AsyncWebServer server(80);


void initSPIFFS();
void initWiFi();

void setup()
{
  Serial.begin(115200);
  initWiFi();
  initSPIFFS();

  pixels.begin();
  pixels.clear();
  pixels.show();
  pixels.setBrightness(brightness);

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
            { request->send(SPIFFS, "/index.html", "text/html", false); });

  server.serveStatic("/", SPIFFS, "/");

  server.on("/change", HTTP_GET, [](AsyncWebServerRequest *request)
            {
              if (request->hasParam(PARAM_INPUT) && request->hasParam(PARAM_INPUT_STATE))
              {
                ledImg = request->getParam(PARAM_INPUT)->value();
                status = request->getParam(PARAM_INPUT_STATE)->value();
                Serial.println(ledImg);
              }

              request->send(200, "text/plain", "OK");
            });

  server.begin();
}

void loop()
{
  if (status)
  {
    switch (ledImg.toInt())
    {
    case 1:
      Serial.println("Poner imagen de alien");
      break;
    case 2:
      Serial.println("poner la segunda imagen aca");
      break;

    default:
      // Serial.println("Este caso no esta contemplado");
      break;
    }
    status = false;
    Serial.println("\nSalio del swithc");
  }
}

void initSPIFFS()
{
  if (!SPIFFS.begin())
  {
    Serial.println("An error has occurred while mounthing spiffs");
  }
  Serial.println("SPIFFS mounted successfully");
}

void initWiFi()
{
  int count = 0;
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(1000);
    if (count == 5)
    {
      ESP.restart();
    }
    count++;
  }
  Serial.print("\n");
  Serial.println(WiFi.localIP());
}