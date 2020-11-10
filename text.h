//String Text;
//
//void buildText() {
//  Text  = "Je rappel que je ne suis pas un professeur ni M.Godelle.\\n";
//  Text += "Il ne faut pas trop me faire confiance, kupo.\\n";
//  Text += "```cs\\n";
//  Text += "#Module| N°TP/TD | Date de rendu↓ | Heure de rendu\\n";
//  Text += "-------+---------+----------------+----------------\\n";
//  Text += "M3201  |CV/mo/civ| Semaine  02/11 | \\n";
//  Text += "M3106  |   TP3   | Mercredi 04/11 | 23:55\\n";
//  Text += "M3106  |  Examen | Jeudi    05/11 | 7:45\\n";
//  Text += "M3105  |  Examen | Jeudi    05/11 | 14:45\\n";
//  Text += "M3106  |   TP4   | Dimanche 08/11 | 23:55\\n";
//  Text += "M3109  |  Examen | Jeudi    12/11 | 16:45\\n";
//  Text += "M3201  |   Oral  | Semaine  16/11 | \\n";
//  Text += "M4204  |   Oral  | Jeudi    26/11 | \\n";
//  Text += "M3205  |  Examen | Vendredi 27/11 | 15:15\\n";
//  Text += "M3201  |  Écrit  | Semaine  07/12 | \\n";
//  Text += "```";
//}

String Normal, HTML, Discord;
int nbline = 3;

void Text() {
  Normal   = "Je fais des test pour passer de texte sans /n a des textes";
  HTML     = Normal + "\n";
  Discord  = Normal + "\\n";
  Normal  += "HTML et Discord qui ont /n et //n respectivement";
  HTML    += Normal + "\n";
  Discord += Normal + "\\n";
  Normal  += "ici tout les / sont anti slash, aidez moi svp, kupo";
  HTML    += Normal + "\n";
  Discord += Normal + "\\n";
}
/*C'est faux, ça répète tout à chaque fois :
 *Je fais des test pour passer de texte sans /n a des textes
 *Je fais des test pour passer de texte sans /n a des textesHTML et Discord qui ont /n et //n respectivement
 *Je fais des test pour passer de texte sans /n a des textesHTML et Discord qui ont /n et //n respectivementici tout les / sont anti slash, aidez moi svp, kupo
 */
