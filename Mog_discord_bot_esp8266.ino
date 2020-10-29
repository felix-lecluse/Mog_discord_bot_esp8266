#include "arduino_secrets.h"
/*
  Discord WebHook Example for ESP32
*/
#include "discord.h"
/*
 * discord.h is made by Rémi Sarrailh aka maditnerd and David Ladd aka drencorxeendrencorxeen
 * Link is here : https://github.com/maditnerd/discord_test
 * webpage.h and text.h added by Félix Lecluse
 * Modify the text in text.h and erase the // on the line "sendDiscord(Text);" in this file.
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
