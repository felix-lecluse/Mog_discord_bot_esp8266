#include "arduino_secrets.h"
/*
  Discord WebHook Example for ESP32
*/
#include "discord.h"

//#include "ota.h"

#include "text.h"
#include "webpage.h"
/*
 * discord.h is made by Rémi Sarrailh aka maditnerd and David Ladd aka drencorxeendrencorxeen.
 * Link is here : https://github.com/maditnerd/discord_test
 * ota.h is found on https://electronics.stackexchange.com/questions/281178/esp8266-01-automatic-upload-and-run-without-manually-toggle-gpio0-to-gnd 
 * in lights0123's post.
 * webpage.h and text.h added by Félix Lecluse.
 * Modify the text in text.h and erase the // on the line "sendDiscord(Text);" in this file.
 */


void setup() {
  Serial.begin(115200);
  connectWIFI();
  //OTA();
  //buildText();
  Text();
  //sendDiscord("Connexion... kupo");
  Web();
}

void loop() {
  //ArduinoOTA.handle();
  server.handleClient();
  if (Sender == HIGH) {
    sendDiscord(Discord);
    Sender = 0;
  }
}
