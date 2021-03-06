#include <Arduino.h>

#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "SPIFFS.h"

#include <otahelp.h>
#include <figureRGB.h>
#include "credentials.h"

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

  pinMode(2, OUTPUT);
  digitalWrite(2, 0);

  initWiFi();

  digitalWrite(2, 1);
  delay(100);
  digitalWrite(2, 0);
  delay(100);
  digitalWrite(2, 1);
  delay(100);
  digitalWrite(2, 0);
  delay(100);
  digitalWrite(2, 1);
  delay(100);

  initSPIFFS();
  starOTA();
  initNeoPixel();

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
            { request->send(SPIFFS, "/index.html", "text/html", false); });

  server.serveStatic("/", SPIFFS, "/");

  server.on("/change", HTTP_GET, [](AsyncWebServerRequest *request)
            {
              if (request->hasParam(PARAM_INPUT) && request->hasParam(PARAM_INPUT_STATE))
              {
                ledImg = request->getParam(PARAM_INPUT)->value();
                status = request->getParam(PARAM_INPUT_STATE)->value();
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
      showAlien();
      break;
    case 2:
      showSpiderman();
      break;
    case 3:
      showGhost();
      break;
    case 4:
      showGrave();
      break;
    case 5:
      showBatman();
      break;
    case 6:
      showSkull();
      break;
    case 7:
      showAll();
      break;

    default:
      break;
    }
    status = false;
  }

  actualizarOTA();
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