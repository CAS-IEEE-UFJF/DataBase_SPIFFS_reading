### Faz leitura do arquivo db.csv com nome e UID

Arquivos .csv são criados no Excel ou programas similares (escolher separação por ';')

#### db.txt é composto por:
* primeira linha é o tamanho do db.
* Cada linha se refere a uma pessoa.
* As informações da mesma pessoa estão separadas por ';'
* nome,UID

```
22;
Fulano01;01 02 03 04
Fulano02;02 02 03 04
Fulano03;03 02 03 04
Fulano04;04 02 03 04
Fulano05;05 02 03 04
Fulano06;06 02 03 04
Fulano07;07 02 03 04
Fulano08;08 02 03 04
Fulano09;09 02 03 04
Fulano10;09 02 03 01
Fulano11;A2 B1 02 03
Fulano12;A2 B1 02 04
Fulano13;A2 B1 02 05
Fulano14;A2 B1 02 06
Fulano15;A2 B1 02 07
Fulano16;A2 B1 02 08
Fulano17;A2 B1 02 09
Fulano18;AC B2 C2 01
Fulano19;AC B2 C2 02
Fulano20;AC B2 C2 03
Fulano21;AC B2 C2 04
Fulano22;AC B2 C2 05
Fulano23;AC B2 C2 06
Fulano24;AC B2 C2 07
```

#### Problemas...
* Neste caso, db já esta na memória flash do esp!!!!

<hr>
Uploading files to file system


ESP8266FS is a tool which integrates into the Arduino IDE. It adds a menu item to Tools menu for uploading the contents of sketch data directory into ESP8266 flash file system.

    * Download the tool: https://github.com/esp8266/arduino-esp8266fs-plugin/releases/download/0.1.3/ESP8266FS-0.1.3.zip.
    * In your Arduino sketchbook directory, create tools directory if it doesn't exist yet
    * Unpack the tool into tools directory (the path will look like <home_dir>/Arduino/tools/ESP8266FS/tool/esp8266fs.jar)
    * Restart Arduino IDE
    * Open a sketch (or create a new one and save it)
    * Go to sketch directory (choose Sketch > Show Sketch Folder)
    * Create a directory named data and any files you want in the file system there
    * Make sure you have selected a board, port, and closed Serial Monitor
    * Select Tools > ESP8266 Sketch Data Upload. This should start uploading the files into ESP8266 flash file system. When done, IDE status bar will display SPIFFS Image Uploaded message.

já deixei pronto a pasta up_db/data/
