#include <Arduino.h>
#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "SPIFFS.h"
#include "credentials.h"

AsyncWebServer server(80);

const char *PARAM_INPUT = "img";
String ledImg;

void initSPIFFS();
void initWiFi();

void setup()
{
  Serial.begin(115200);
  initWiFi();
  initSPIFFS();

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request)
            { request->send(SPIFFS, "/index.html", "text/html", false); });

  server.serveStatic("/", SPIFFS, "/");

  server.on("/change", HTTP_GET, [](AsyncWebServerRequest *request)
            {
              if (request->hasParam(PARAM_INPUT))
              {
                ledImg = request->getParam(PARAM_INPUT)->value();
                Serial.println(ledImg);
              }

              request->send(200, "text/plain", "OK");
            });

  server.begin();
}

void loop()
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