### Faz leitura do arquivo db.txt o nome e UID

#### db.txt é composto por:
* Cada linha se refere a uma pessoa.
* As informações da mesma pessoa estão separadas por ','
* nome,UIDS

```
20
Fulano01,01 02 03 04
Fulano02,02 02 03 04
Fulano03,03 02 03 04
Fulano04,04 02 03 04
Fulano05,05 02 03 04
Fulano06,06 02 03 04
Fulano07,07 02 03 04
Fulano08,08 02 03 04
Fulano09,09 02 03 04
Fulano10,09 02 03 01
Fulano11,A2 B1 02 03
Fulano12,A2 B1 02 04
Fulano13,A2 B1 02 05
Fulano14,A2 B1 02 06
Fulano15,A2 B1 02 07
Fulano16,A2 B1 02 08
Fulano17,A2 B1 02 09
Fulano18,AC B2 C2 01
Fulano19,AC B2 C2 02
Fulano20,AC B2 C2 03
Fulano21,AC B2 C2 04
Fulano22,AC B2 C2 05
Fulano23,AC B2 C2 06
Fulano24,AC B2 C2 07
```

#### Problemas...
* ~~O tamanho do db já tem que ser conhecido.~~<br>
  Agora, na primeira linha do db se refere ao tamanho do db (qualquer coisa depois da 20º será **ignorado**).

* ~~DB tem que ser criado em uma única linha e com arquivos separados por ','.~~<br>
  Agora, pode ter quebra de linha;

* Neste caso, db já esta na memória flash do esp!!!!
