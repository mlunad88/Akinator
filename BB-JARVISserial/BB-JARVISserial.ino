/*********************************************************************
 *********************************************************************
 *******                                                       *******
 *******     ARDUINO PROYECT FOR T.I. IES JUANA DE CASTILLA    ******* 
 *******                    by Manbox                          *******
 *******                                                       *******
 *********************************************************************              
 *********************************************************************/
 int reply;
 int magic;
//Entradas interruptores (respuestas)
const int pin0 = 5;
const int pin1 = 6;
const int pin2 = 7;
const int pin3 = 8;
const int pin4 = 9;
int valor0;
int valor1;
int valor2;
int valor3;
int valor4;

void setup()
{
  while (!Serial)
  {
    ;
  }
  // Indicar que el pin del pulsador es entrada
  pinMode(pin0, INPUT);
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
  pinMode(pin4, INPUT);
  Serial.begin(9600);
//Mensaje inicial
  Serial.println("HOLA!");
  delay(2000);
  Serial.println("ME LLAMO BB-JARVIS");
  delay(2000);  
  
//De que trata el juego
  Serial.println("Y ME GUSTARIA HACERTE UNA SERIE DE PREGUNTAS PARA ADIVINAR QUIEN ERES");
  delay(4000);
  Serial.print("EMPEZAMOS?");
  delay(1000);
  Serial.print(".");
  delay(500);
  Serial.print(".");
  delay(500);
  Serial.print(".");
  delay(500);
  Serial.print("PULSA CUALQUIER TECLA!");
  do
  {
  valor0 = digitalRead(pin0);
  valor1 = digitalRead(pin1);
  valor2 = digitalRead(pin2);
  valor3 = digitalRead(pin3);
  valor4 = digitalRead(pin4);
  } while (valor0 == LOW);
  Serial.println("Vamos a ello!");
  delay(2000);
}

void loop()
{
  
//Posiciones de los valores (luego se hace operación y se colocan para formar el Id de usuario)
  int A;
  int B;
  int C;
  int D;
  int E;
  int F;
  int G;
  int H;
  int I;
for (int reply = 0; reply < 9; reply++)
{
  switch (reply)
    {
     case 0: //PENDIENTES*************
          Serial.println("SUELES LLEVAR PENDIENTES?   a)NO  b)SI");
          do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW);
          if (valor0 == HIGH)
          {
            A=0;
            Serial.println("Has elegido a)NO");
            delay(2000);
          }
          else if (valor1 == HIGH)
          {
            A=1;
            Serial.println("Has elegido b)SI");
            delay(2000);
          }
     break;
//*************************************************************
       case 1: //COLOR PELO****************
       Serial.println("COLOR DEL PELO   a)NEGRO   b)RUBIO    c)MARRONCITO     d)ROJO     e)GRIS MODERNO");
       do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            valor2 = digitalRead(pin2);
            valor3 = digitalRead(pin3);
            valor4 = digitalRead(pin4);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW && valor2 == LOW && valor3 == LOW && valor4 == LOW);
          if (valor0 == HIGH)
          {
            B=0;
            Serial.println("Has elegido a)NEGRO");
            delay(2000);
          }
          else if (valor1 == HIGH)
          {
            B=1;
            Serial.println("Has elegido b)RUBIO");
            delay(2000);
          }
          else if (valor2 == HIGH)
          {
            B=2;
            Serial.println("Has elegido c)MARRONCITO");
            delay(2000);      
          }
          else if (valor3 == HIGH)
          {
            B=3;
            Serial.println("Has elegido d)ROJO");
            delay(2000);
          }
          else if (valor4 == HIGH)
          {
            B=4;
            Serial.println("Has elegido e)GRIS MODERNO");
            delay(2000);
          }
     break;
//***************************************************************       
     case 2: //SEXO*********************
     Serial.println("ERES MUJER O HOMBRE?  a)MUJER   b)HOMBRE");
     do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW);
          if (valor0 == HIGH)
          {
            C=0;
            Serial.println("Has elegido a)MUJER");
            delay(2000);
          }          
          else if (valor1 == HIGH)
          {
            C=1;
            Serial.println("Has elegido b)HOMBRE");
            delay(2000);
          }
     break;
//************************************************************
     case 3: //FECHA NACIMIENTO
     Serial.println("FECHA DE NACIMIENTO  a)1997  b)1998  c)1999  d)ANTES");
     do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            valor2 = digitalRead(pin2);
            valor3 = digitalRead(pin3);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW && valor2 == LOW && valor3 == LOW);
     if (valor0 == HIGH) //1997
          {
            D=0;
            Serial.println("Has elegido a)1997");
            delay(2000);
          }
     else if (valor1 == HIGH) //1998
          {
            D=1;
            Serial.println("Has elegido b)1998");
            delay(2000);
          }
     else if (valor2 == HIGH) //1999
          {
            D=2;
            Serial.println("Has elegido c)1999");
            delay(2000);
          }
     else if (valor3 == HIGH) //ANTES
          {
            D=3;
            Serial.println("Has elegido d)ANTES");
            delay(2000);
          }
     break;
//************************************************************     
     case 4: //CLASE
     Serial.println("AULA?   a)1A  b)1C  c)OTRO");
     do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            valor2 = digitalRead(pin2);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW && valor2 == LOW);
     if (valor0 == HIGH) //1A
          {
            E=0;
            Serial.println("Has elegido a)1A");
            delay(2000);
          }
     else if (valor1 == HIGH) //1C
          {
            E=1;
            Serial.println("Has elegido b)1C");
            delay(2000);
          }
          else if (valor2 == HIGH) //Otro curso
          {
          E=2; 
          Serial.println("Has elegido c)OTRO CURSO");
          delay(2000);
          }
     break;
//************************************************************     
     case 5: //OCULARES
     Serial.println("LLEVAS GAFAS, LENTILLAS?   a)NO  b)SI");
     do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW);
     if (valor0 == HIGH) //NO
     {
      F=0;
      Serial.println("Has elegido a)NO");
      delay(2000);
     }
     else if (valor1 == HIGH) //SI
     {
      F=1;
      Serial.println("Has elegido b)SI");
      delay(2000);
     }
     break;
//*************************************************************     
     case 6: //AMOR AL FUTBOL
     Serial.println("TE GUSTA EL FUTBOL?  a)NO  b)SI");
     do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW);
     if (valor0 == HIGH)
     {
      G=0;
      H=5;
      Serial.println("Has elegido a)NO");
      delay(2000);
     }
     else if (valor1 == HIGH)
     {
      G=1;
      Serial.println("Has elegido b)SI");
      delay(2000);
     }
     break;
//************************************************************     
     case 7: //EQUIPO FUTBOL
     if (H == 5)
     {
      goto marca1;
     }
     Serial.println("EQUIPO DE FUTBOL?  a)REAL MADRID   b)ATLETICO DE MADRID  c)RAYO VAYECANO   d)BARSA   e)OTRO EQUIPO");
     do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            valor2 = digitalRead(pin2);
            valor3 = digitalRead(pin3);
            valor4 = digitalRead(pin4);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW && valor2 == LOW && valor3 == LOW && valor4 == LOW);
     if (valor0 == HIGH)
     {
      H=0;
      Serial.println("Has elegido a)REAL MADRID");
      delay(2000);
     }
     else if (valor1 == HIGH)
     {
      H=1;
      Serial.println("Has elegido b)ATLETICO DE MADRID");
      delay(2000);
     }
     else if (valor2 == HIGH)
     {
      H=2;
      Serial.println("Has elegido c)RAYO VAYECANO");
      delay(2000);
     }
     else if (valor3 == HIGH)
     {
      H=3;
      Serial.println("Has elegido d)BARSA>");
      delay(2000);
     }
     else if (valor4 == HIGH)
     {
      H=4;
      Serial.println("Has elegido e)OTRO EQUIPO");
      delay(2000);
     }
     marca1:
     break;
//****************************************************************     
     case 8: //INICIAL APELLIDO
     Serial.println("INICIAL DE TU APELLIDO?  a)A-D   b)E-L   c)M-N   d)O-Z");
     do
          {
            valor0 = digitalRead(pin0);
            valor1 = digitalRead(pin1);
            valor2 = digitalRead(pin2);
            valor3 = digitalRead(pin3);
            delay(20);
          } while (valor0 == LOW && valor1 == LOW && valor2 == LOW && valor3 == LOW);
     if (valor0 == HIGH)
     {
      I=0;
      Serial.println("Has elegido a)A-D");
      delay(2000);
     }
     else if (valor1 == HIGH)
     {
      I=1;
      Serial.println("Has elegido b)E-L");
      delay(2000);
     }
     else if (valor2 == HIGH)
     {
      I=2;
      Serial.println("Has elegido c)M-N");
      delay(2000);
     }
     else if (valor3 == HIGH)
     {
      I=3;
      Serial.println("Has elegido d)O-Z");
      delay(2000);
     }
     break;
    }
}
//LECTURA TERMINADA
//ECUACIÓN
  long id = A*100000000 + B*10000000 + C*1000000 + D*100000 + E*10000 + F*1000 + G*100 + H*10 + I;
  delay(1000);
  Serial.println(F("Hummmmm...."));
  delay(500);
  Serial.println(".");
  delay(500);
  Serial.println(".");
  delay(500);
  Serial.println(".");
  delay(2500);
  if (id == 1210101)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES EL CREADOR, MARCE"));
    delay(5000);
  }
  else if (id == 100320051)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES SOFIA LUNA"));
    delay(5000);
  }
  else if (id == 211111)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES MARIA LOPEZ, MARY PARA LOS AMIGOS"));
    delay(5000);
  }else if (id == 1010131)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES SEBASTIAN GONZALEZ, SEBITAS PARA LOS AMIGOS"));
    delay(5000);
  }else if (id == 1200051)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES ALEJANDRO, ALEX PARA LOS AMIGOS"));
    delay(5000);
  }else if (id == 1200050)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES CRISTIAN ARRIBAS, EL CEREBRITO"));
    delay(5000);
  }else if (id == 1210110)
  {Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES GUILLE, EL PESAO"));
    delay(5000);
  }else if (id == 1210121)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES LUISCAR, MADE IN COLOMBIA"));
    delay(5000);
  }else if (id == 1211052)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES ADRIAN MONTERO, TU PARLES FRANCAISE AUSSI"));
    delay(5000);
  }else if (id == 1211100)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES AMADOR BERMUDEZ, MADE IN SPAIN, LA FUERZA RESIDE EN TI PADAWAN"));
    delay(5000);
  }else if (id == 11100101)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES ALBERTO LOPEZ, MADE IN SPRINGFIELD"));
    delay(5000);
  }else if (id == 11200050)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES ALVARO COUTIN, UN BUEN CAMARADA"));
    delay(5000);
  }else if (id == 21100052)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES DAVID NAVARRO, UN CHICO SINGULAR, LA FUERZA RESIDE EN TI PADAWAN"));
    delay(5000);
  }else if (id == 21200042)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES ROBERTO MARTIN, SUROBER PARA LOS AMIGOS!"));
    delay(5000);
  }else if (id == 21210103)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES SERGIO TORIBIO, SIEMPRE VAS BURLAO"));
    delay(5000);
  }else if (id == 31111100)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES SERGIO CUELLAR, SOCORRISTA Y JOVEN PADAWAN POSEEDOR DE LA FUERZA"));
    delay(5000);
  }else if (id == 110210103)
  {
    Serial.print("EUREKA!");
  delay(1500);
    Serial.println(F("ERES CARMEN PIQUERAS PALOMARES MOLINA HERBAS, TE GUSTA LA CHAPA QUE VIBRA"));
    delay(5000);
  }else if (id == 101211112)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES DAVID MENDEZ, Y TE IBA A CONTAR UN CHISTE SOBRE EL SODIO Y EL HIDRIGENO.... PERO NaH"));
    delay(4000);
    Serial.println("xd");
    delay(500);
    Serial.println("MI HUMOR ES MEJORABLE");
    delay(1000);
    Serial.println("ERES MENDEZ PARA LOS AMIGOS Y LA FUERZA RESIDE EN TI JOVEN PADAWAN");
    delay(5000);
  }else if (id == 121210112)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES SERGIO MIQUEL, MIQUEL PARA LOS AMIGOS"));
    delay(5000);
  }else if (id == 130201100)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES MARTA DURAN MARTINEZ SANCHEZ SANCHEZ RUBIO, DURI PARA LOS AMIGOS"));
    delay(5000);
  }else if (id == 41320050)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES OSCAR, EL MAESTRO. EL PODER DE LA FUERZA ES TUYO"));
    delay(5000);
  }else if (id == 41320051)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES OSCAR, EL MAESTRO. EL PODER DE LA FUERZA ES TUYO"));
    delay(5000);
  }else if (id == 41320052)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES OSCAR, EL MAESTRO. EL PODER DE LA FUERZA ES TUYO"));
    delay(5000);
  }else if (id == 41320053)
  {
    Serial.println("EUREKA!");
  delay(1500);
    Serial.println(F("ERES OSCAR, EL MAESTRO. EL PODER DE LA FUERZA ES TUYO"));
    delay(5000);
  }
  else
  {
    Serial.println(F("Lo siento camarada, pero no estás en la base de datos"));
    delay(3000);
  }
  Serial.println(F("HA SIDO UN PLACER!"));
  delay(2000);
  Serial.println(F("PULSA CUALQUIER BOTON PARA VOLVER A JUGAR"));
  do
  {
    valor4 = digitalRead(pin4);
    valor3 = digitalRead(pin3);
    valor2 = digitalRead(pin2);
    valor1 = digitalRead(pin1);
    valor0 = digitalRead(pin0);
  } while (valor0 == LOW && valor1 == LOW&& valor2 == LOW && valor3 == LOW&& valor4 == LOW);
}

