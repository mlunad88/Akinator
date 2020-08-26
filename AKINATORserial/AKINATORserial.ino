/*********************************************************************
 *********************************************************************
 *******                                                       *******
 ******* MANBOX ARDUINO PROYECT FOR T.I. IES JUANA DE CASTILLA ******* 
 *******              by Marcelo Luna Díaz                     *******
 *******                                                      *******
 *********************************************************************              
 *********************************************************************/
//Entradas interruptores (respuestas)
const int pin0 = 6;
const int pin1 = 7;
const int pin2 = 8;
const int pin3 = 9;
const int pin4 = 10;
const int pin5 = 11;
int valor0;
int valor1;
int valor2;
int valor3;
int valor4;
int valor5;

//Preguntas
String textos[9] = {
"SUELES LLEVAR PENDIENTES? a)No b)Si",
"COLOR DEL PELO a)Negro b)Rubio c)Castaño d)Rojo e)Gris moderno",
"ERES MUJER O VARON? a)Mujer b)Varón",
"FECHA DE NACIMIENTO a)1997 b)1998 c)1999 d)Antes",
"AULA a)1A b)1C c)Otro",
"LLEVAS GAFAS, LENTILLAS? a)NO b)SI",
"TE GUSTA EL FUTBOL? a)NO b)SI",
"EQUIPO FUTBOL?",
"INICIAL DE TU APELLIDO? a)A-D b)E-L c)M-N d)O-Z"};

void setup()
{
  // Indicar que el pin del pulsador es entrada
  pinMode(pin0, INPUT);
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
  pinMode(pin4, INPUT);
  pinMode(pin5, INPUT);
  Serial.begin(9600);
}

void loop()
{
  
//Mensaje inicial
  Serial.println("HOLA!");
  delay(1000);
  Serial.println("ME LLAMO BB-JARVIS");
  delay(2000);  
  
//De que trata el juego
  Serial.println("Y VOY A HACERTE UNAS PREGUNTAS PARA ADIVINAR QUIEN ERES");
  delay(4000);
  
//El juego ha comenzado...
  Serial.println("EMPEZEMOS...");
  delay(2000);
  
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
  
//Formula pregunta++++++++++++++++++++++++++++++
  for (int n = 0; n <9; n++)
  {
    String texto = textos [n];
    delay(1000);
    Serial.println(" Pregunta: ");
    Serial.print(n);
    delay(2000);
    Serial.println(texto);
    delay(5000);
//lee las respuestas+++++++++++++++++++++++++++++
    switch (n)
    {
     case 0: //PENDIENTES*************
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
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
          else 
          {
          A=2;
          Serial.println("No has elegido nada");
          delay(2000);
          }
     break;
//*************************************************************
       case 1: //COLOR PELO****************
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
   valor2 = digitalRead(pin2);
   valor3 = digitalRead(pin3);
   valor4 = digitalRead(pin4);
          if (valor0 == HIGH)
          {
            B=0;
            Serial.println("Has elegido a)NEGRO");
          }
          else if (valor1 == HIGH)
          {
            B=1;
            Serial.println("Has elegido b)RUBIO");
          }
          else if (valor2 == HIGH)
          {
            B=2;
            Serial.println("Has elegido c)CASTANO");      
          }
          else if (valor3 == HIGH)
          {
            B=3;
            Serial.println("Has elegido d)ROJO");
          }
          else if (valor4 == HIGH)
          {
            B=4;
            Serial.println("Has elegido e)GRIS MODERNO");
          }
          else 
          {
          B=5;
          Serial.println("No has elegido nada");
          delay(2000);
          }
     break;
//***************************************************************       
     case 2: //SEXO*********************
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
          if (valor0 == HIGH)
          {
            C=0;
            Serial.println("Has elegido a)MUJER");
          }          
          else if (valor1 == HIGH)
          {
            C=1;
            Serial.println("Has elegido b)VARON");
          }
          else 
          {
            C=3;
            Serial.println("No has elegido nada");
            delay(2000);
          }
     break;
//************************************************************
     case 3: //FECHA NACIMIENTO
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
   valor2 = digitalRead(pin2);
   valor3 = digitalRead(pin3);
     if (valor0 == HIGH) //1997
          {
            D=0;
            Serial.println("Has elegido a)1997");
          }
     else if (valor1 == HIGH) //1998
          {
            D=1;
            Serial.println("Has elegido b)1998");
          }
     else if (valor2 == HIGH) //1999
          {
            D=2;
            Serial.println("Has elegido c)1999");
          }
     else if (valor3 == HIGH) //ANTES
          {
            D=3;
            Serial.println("Has elegido d)ANTES");
          }
     else 
          {
          D=4;
          Serial.println("No has elegido nada");
          }
     break;
//************************************************************     
     case 4: //CLASE
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
   valor2 = digitalRead(pin2);
     if (valor0 == HIGH) //1A
          {
            E=0;
            Serial.println("Has elegido a)1ºA");
            delay(2000);
          }
     else if (valor1 == HIGH) //1C
          {
            E=1;
            Serial.println("Has elegido b)1ºC");
            delay(2000);
          }
          else if (valor2 == HIGH) //Otro curso
          {
          E=2; 
          Serial.println("Has elegido c)Otro curso");
          delay(2000);
          }
          else 
          {
          E=3; 
          Serial.println("No has elegido nada");
          delay(2000);
          }
     break;
//************************************************************     
     case 5: //OCULARES
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
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
    else 
     {
     F=2;
     Serial.println("No has elegido nada");
     }
     break;
//*************************************************************     
     case 6: //AMOR AL FUTBOL
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
     if (valor0 == HIGH)
     {
      G=0;
      Serial.println("Has elegido a)NO");
      delay(2000);
     }
     else if (valor1 == HIGH)
     {
      G=1;
      Serial.println("Has elegido b)SI");
      delay(2000);
     }
     else
     {
     G=2;
     Serial.println("No has elegido nada");
     }
     break;
//************************************************************     
     case 7: //EQUIPO FUTBOL
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
   valor2 = digitalRead(pin2);
   valor3 = digitalRead(pin3);
   valor4 = digitalRead(pin4);
     if (valor0 == HIGH)
     {
      H=0;
      Serial.println("Has elegido a)REAL MADRID");
     }
     else if (valor1 == HIGH)
     {
      H=1;
      Serial.println("Has elegido b)ATLETICO DE MADRID");
     }
     else if (valor2 == HIGH)
     {
      H=2;
      Serial.println("Has elegido c)RAYO VAYECANO");
     }
     else if (valor3 == HIGH)
     {
      H=3;
      Serial.println("Has elegido d)BARCA>");
     }
     else if (valor4 == HIGH)
     {
      H=4;
      Serial.println("Has elegido e)OTRO EQUIPO");
     }
     else 
     {
     H=0;
     Serial.println("No has elegido nada");
     }
     break;
//****************************************************************     
     case 8: //INICIAL APELLIDO
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
   valor2 = digitalRead(pin2);
   valor3 = digitalRead(pin3); 
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
     else 
     {
     I=4;
     Serial.println("No has elegido nada");
     }
     break;
    }
  }
//LECTURA TERMINADA
//ECUACIÓN
  long id = A*100000000 + B*10000000 + C*1000000 + D*100000 + E*10000 + F*1000 + G*100 + H*10 + I;
  delay(1000);
  Serial.println("  CONECTANDO   ");
  Serial.println("CON LOS ASTROS");
  delay(500);
  Serial.println(".");
  delay(500);
  Serial.println(".");
  delay(500);
  Serial.println(".");
  delay(500);
  Serial.println("$ñ3@/¬&|^@ñÇ^·!ñªÇ¿:-%$€ñÇ^·%Çª€ª&%/-%Çª€ª&%/-|^@");
  delay(800);
  delay(1000);
  if (id == 1210101)
  {
    Serial.println("EUREKA!");
    delay(1500);
    Serial.println("ERES EL CREADOR, MARCELO LUNA");
    delay(5000);
  }
  if (id == 100320051)
  {
    Serial.println("EUREKA!");
    delay(1500);
    Serial.println("ERES SOFIA LUNA");
    delay(5000);
  }
  if(id > 13020110)
  {
    Serial.println("No te conozco");
    Serial.println("Lo siento, prueba otra vez!");
    delay(3000);
  }
  do
  {
    Serial.println(".");
    delay(500);
    Serial.println(".");
    delay(500);
    delay(500);
  } while (pin0 == LOW);
}

