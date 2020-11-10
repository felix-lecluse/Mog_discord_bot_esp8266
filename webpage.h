#include <ESP8266WebServer.h>

int server_port = 80;                       //changez le port ici
ESP8266WebServer server(server_port);

String Root;

int Sender = 0;

void buildRoot() {
  Root  = "<html>\n";
  Root += "<!--Page web crée par Lecluse Félix pour le bot Discord Mog-->\n";
  Root += "<head>\n";
  Root += " <meta charset='UTF-8'>\n";
  Root += " <meta name='viewport' content='width=device-width'>\n";
  Root += " <title>Mog</title>\n";
  Root += "</head>\n";
  Root += "\n";
  Root += "\n";
  Root += "<body>\n";
  Root += " <div>\n";
  Root += HTML;
  Root += " </div>\n";
  Root += " <form method='POST'>\n";
  Root += "  <label for='contenue'>Écrivez la ligne ici : </label>\n";
  Root += "  <input name='Texte' id='Texte' placeholder='Écrivez le texte ici'></input>\n";
  Root += "  <input type='submit' value='Envoyer'></input>\n";
  Root += " </form>\n";
  Root += " <form action='Send'>\n";
  Root += "   <input type='submit' class='' value='Envoyer' title='Envoye le message sur Discord'>\n";
  Root += " </form>\n";
  Root += "</body>\n";
  Root += "</html>\n";
}


void handleRoot() {
  buildRoot();
  server.send(200, "text/html", Root);
}

void handleNotFound() {                     //message d'erreur en cas de problème
  server.send(404, "text/plain", "Error");
}


//Quand l'utilisateur appuie sur un bouton sa envoie un message et ça recharge la page
void Send() {
  Sender = 1;
  handleRoot();
}


void Web() {
  //Code qui rajoute une sécurité avec une authentification quand on se connecte sur la page
  server.on("/", []() {
  //  if (!server.authenticate(www_username, www_password)) {
  //    return server.requestAuthentication();
  //  }
    handleRoot();
  });


  //ici on recueilli les données de la page web (action) et ça active les fonctions (avec les messages)
  server.on("/Send", Send);

  //faire fonctionner le server
  server.begin();

  //Affiche sur le moniteur série l'ip local, le port, et l'identifiant/mot de passe de la page de l'esp8266
  Serial.println("Le serveur HTTP est en route.");
  Serial.print("IP local: ");
  Serial.print(WiFi.localIP());
  Serial.print(":");
  Serial.println(server_port);
}
