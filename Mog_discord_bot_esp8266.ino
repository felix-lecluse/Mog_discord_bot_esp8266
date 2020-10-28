#include "arduino_secrets.h"
/*
  Discord WebHook Example for ESP32
*/
#include "discord.h"
/*
 * Webpage.h and text.h added by Félix Lecluse
 * Modify the text in text.h
*/
#include "text.h"
#include "webpage.h"

void setup() {
  Serial.begin(9600);
  connectWIFI();
  buildText();
  //sendDiscord(Text);
  Web();
}

void loop() {
  server.handleClient();
}
