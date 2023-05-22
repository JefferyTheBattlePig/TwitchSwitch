//---------------------------------------------------------
// File       : TwitchIntegratedServo.ino
// Author     : JeffreyPyg (01-07-2023)
// Purpose    : Integrate a MOSFET, to a twitch EventSub
//---------------------------------------------------------

#include <WiFiClientSecure.h>
#include <ESP8266WiFi.h>
#include <ArduinoJson.h>
#include "TwitchSwitch.h"

WiFiServer wifiServer(WEBHOOK_PORT);

void setup() {

  delay(1000);
  Serial.begin(115200); // set baud rate
  WiFi.mode(WIFI_OFF);
  delay(1000);
  WiFi.mode(WIFI_STA);

  // D0 on the board
  pinMode(D0, OUTPUT);

  Serial.println();
  Serial.println("Connecting to WiFi");

  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  wifiServer.begin();

} // end setup()

void loop() {

  WiFiClient client = wifiServer.available();
  
  if (client) {
    while (client.connected()) {
 
      String payload = "";
      bool isJSON = false;
      while (client.available()>0) {
        char c = client.read();
        if (c == '{') {
          isJSON = true;
        }
        if (isJSON){
          payload += c;
        }
      }
 
      delay(10);

    DynamicJsonDocument doc(1024);
    deserializeJson(doc, payload);

    String body = doc["body"];

    if (body == "live"){
      Serial.println("I just went live");
        digitalWrite(D0, HIGH);       // sets the digital D0 on
        delay(10000);                  
        digitalWrite(D0, LOW);        // sets the digital D0 off
        client.stop();
    }
    }

    client.stop();
    Serial.println("Client Disconnected");
}
}
