#include <Arduino.h>
#include <FS.h>

String name [30] = "";
String uid [30] = "";
String lei = "";
int cont = 0;
int cont_max;

void setup()
{
  Serial.begin(115200);
  SPIFFS.begin();

  File db = SPIFFS.open("/db.txt", "r");

  if(!db)
  {
    Serial.println("file open failed :/");
  }
  else
  {
    lei = db.readStringUntil('\n');
    cont_max = lei.toInt(); //tamanho do db

    Serial.println("file open :)");

    while (cont < cont_max)
    {
      lei = db.readStringUntil(',');
      name[cont] = lei;

      lei = db.readStringUntil('\n'); //quebra de linha \n ou \r
      uid[cont] = lei;

      cont++;
    }

    db.close();  //Close file
    Serial.println("File Closed");
  }
}

void loop()
{
  for(int i = 0; i < cont_max; i++)
  {//imprime db
    Serial.print(name[i]);
    Serial.print(" _ ");
    Serial.print(uid[i]);

    Serial.println("");
    delay(200);
  }

  delay(10000);//espera 10s
}
