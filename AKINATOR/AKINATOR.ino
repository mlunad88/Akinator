/*********************************************************************
 *********************************************************************
 *******                                                       *******
 ******* MANBOX ARDUINO PROYECT FOR T.I. IES JUANA DE CASTILLA ******* 
 *******              by Marcelo Luna Díaz                     *******
 *******                                                      *******
 *********************************************************************              
 *********************************************************************/
// include the library code:
#include <LiquidCrystal.h>
#define alinicio lcd.setCursor(0, 0);
#define limpiars lcd.clear();

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//Entradas interruptores (respuestas)
const int pin0 = 6;
const int pin1 = 7;
const int pin2 = 8;
const int pin3 = 9;
const int pin4 = 10;
const int pin5 = 15;
int valor0;
int valor1;
int valor2;
int valor3;
int valor4;
int valor5;

// varuable del valor del pulsador
int estadopulsador = 0;

// valor del pulsador al inicio
int pulsadorinicio = 0;

//Preguntas
String textos[9] = {
"  SUELES LLEVAR PENDIENTES?",
"  COLOR DEL PELO",
"  ERES MUJER O VARON?",
"  FECHA DE NACIMIENTO",
"  DE QUE CLASE ERES?",
"  LLEVAS GAFAS, LENTILLAS?",
"  TE GUSTA EL FUTBOL?",
"  DE QUE EQUIPO ERES?",
"  INICIAL DE TU APELLIDO?"};

void setup()
{
  // set up the number of columns and rows on the LCD
  lcd.begin(16, 2);

  // Indicar que el pin del pulsador es entrada
  pinMode(pin0, INPUT);
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
  pinMode(pin4, INPUT);
  pinMode(pin5, INPUT);
}

void loop()
{
//nombrar el valor de la lectura de las respuestas
   valor0 = digitalRead(pin0);
   valor1 = digitalRead(pin1);
   valor2 = digitalRead(pin2);
   valor3 = digitalRead(pin3);
   valor4 = digitalRead(pin4);
   valor5 = digitalRead(pin5);
  
//Mensaje inicial
  limpiars;
  alinicio;
  lcd.print("HOLA!");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);
  limpiars;
  
//De que trata el juego
  delay(1000);
  alinicio;  
  lcd.print("VOY A HACERTE");
  lcd.setCursor(0, 1);
  lcd.print("UNAS PREGUNTAS");
  delay(3000);
  limpiars;
  alinicio;
  lcd.print("PARA ADIVINAR");
  lcd.setCursor(0, 1);
  lcd.print("QUIEN ERES");
  delay(4000);
  limpiars;
  delay(1000);
  
//El juego ha comenzado...
  alinicio;
  lcd.print("EMPEZEMOS...");
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
    limpiars;
    delay(1000);
    lcd.print(" Pregunta : ");
    lcd.print(n);
    delay(2000);
    limpiars;
    delay(500);
    lcd.print(texto);
    for (int p = 0; p <=16; p++) //scroll
    {
      lcd.scrollDisplayLeft();
      delay(800);
    }
    lcd.setCursor(0, 1);
    
//lee las respuestas+++++++++++++++++++++++++++++
    switch (n)
    {
     case 0: //PENDIENTES*************
          if (valor0 == HIGH)
          {
            A=0;
            lcd.print("Has elegido <NO>");
            delay(2000);
          }
          if (valor1 == HIGH)
          {
            A=1;
            lcd.print("Has elegido <SI>");
            delay(2000);
          }
          A=2;
          lcd.print("No has elegido nada");
            for (int p = 0; p <=18; p++)
            {
              lcd.scrollDisplayLeft();
               delay(600);
            }
     break;
//*************************************************************
       case 1: //COLOR PELO****************
          if (valor0 == HIGH)
          {
            B=0;
            lcd.print("Has elegido : <NEGRO>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(600);
            }
          }
          if (valor1 == HIGH)
          {
            B=1;
            lcd.print("Has elegido : <RUBIO>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(600);
            }
          }
          if (valor2 == HIGH)
          {
            B=2;
            lcd.print("Has elegido : <CASTANO>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(600);
            }        
          }
          if (valor3 == HIGH)
          {
            B=3;
            lcd.print("Has elegido : <ROJO>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(600);
            }
          }
          if (valor4 == HIGH)
          {
            B=4;
            lcd.print("Has elegido : <GRIS MODERNO>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(600);
            }
          }
          B=2;
          lcd.print("No has elegido nada");
            for (int p = 0; p <=18; p++)
            {
              lcd.scrollDisplayLeft();
              delay(600);
            }
     break;
//***************************************************************       
     case 2: //SEXO*********************
          if (valor0 == HIGH)
          {
            C=0;
            lcd.print("Has elegido : <MUJER>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(800);
            }
          }          
          if (valor1 == HIGH)
          {
            C=1;
            lcd.print("Has elegido : <VARON>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(800);
            }
          }
          C=2;
          lcd.print("No has elegido nada");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(800);
            }
     break;
//************************************************************
     case 3: //FECHA NACIMIENTO
     if (valor0 == HIGH) //1997
          {
            D=0;
            lcd.print("Has elegido : <1997>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(800);
            }
          }
     if (valor1 == HIGH) //1998
          {
            D=1;
            lcd.print("Has elegido : <1998>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(800);
            }
          }
     if (valor2 == HIGH) //1999
          {
            D=2;
            lcd.print("Has elegido : <1999>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(800);
            }
          }
     if (valor3 == HIGH) //ANTES
          {
            D=3;
            lcd.print("Has elegido : <ANTES>");
            for(int t=0; t <= 18; t++)
            {
              lcd.scrollDisplayLeft();
              delay(800);
            }
          }
          D=4;
     lcd.print("No has elegido nada");
     for(int t=0; t <= 18; t++)
           {
              lcd.scrollDisplayLeft();
              delay(800);
           } 
     break;
//************************************************************     
     case 4: //CLASE
     if (valor0 == HIGH) //1A
          {
            E=0;
            lcd.print("Has elegido: <1A>");
            delay(2000);
          }
     if (valor1 == HIGH) //1C
          {
            E=1;
            lcd.print("Has elegido: <1C>");
            delay(2000);
          }
          E=2; 
     lcd.print("No has elegido nada");
     for(int t=0; t <= 18; t++)
       {
        lcd.scrollDisplayLeft();
        delay(800);
       }
     break;
//************************************************************     
     case 5: //OCULARES
     if (valor0 == HIGH) //NO
     {
      F=0;
      lcd.print("Has elegido <NO>");
      delay(2000);
     }
     if (valor1 == HIGH) //SI
     {
      F=1;
      lcd.print("Has elegido <SI>");
      delay(2000);
     }
     F=2;
     lcd.print("No has elegido nada");
     for(int t=0; t <= 18; t++)
     {
      lcd.scrollDisplayLeft();
      delay(800);
     }
     break;
//*************************************************************     
     case 6: //AMOR AL FUTBOL
     if (valor0 == HIGH)
     {
      G=0;
      lcd.print("Has elegido <NO>");
      delay(2000);
     }
     if (valor1 == HIGH);
     {
      G=1;
      lcd.print("Has elegido <SI>");
      delay(2000);
     }
     G=2;
     lcd.print("No has elegido nada");
     for(int t=0; t <= 18; t++)
     {
      lcd.scrollDisplayLeft();
      delay(800);
     }
     break;
//************************************************************     
     case 7: //EQUIPO FUTBOL
     if (valor0 == HIGH)
     {
      H=0;
      lcd.print("Has elegido <Real Madrid>");
      for(int t=0; t <= 18; t++)
      {
      lcd.scrollDisplayLeft();
      delay(800);
      }
     }
     if (valor1 == HIGH)
     {
      H=1;
      lcd.print("Has elegido <ATLETICO DE MADRID>");
      for(int t=0; t <= 18; t++)
      {
      lcd.scrollDisplayLeft();
      delay(800);
      }
     }
     if (valor2 == HIGH)
     {
      H=2;
      lcd.print("Has elegido <RAYO VAYECANO>");
      for(int t=0; t <= 18; t++)
      {
      lcd.scrollDisplayLeft();
      delay(800);
      }
     }
     if (valor3 == HIGH)
     {
      H=3;
      lcd.print("Has elegido <BARCA>");
      for(int t=0; t <= 18; t++)
      {
      lcd.scrollDisplayLeft();
      delay(800);
      }
     }
     if (valor4 == HIGH)
     {
      H=4;
      lcd.print("Has elegido <OTRO>");
      for(int t=0; t <= 18; t++)
      {
      lcd.scrollDisplayLeft();
      delay(800);
      }
     }
     H=5;
     lcd.print("No has elegido nada");
     for(int t=0; t <= 18; t++)
     {
      lcd.scrollDisplayLeft();
      delay(800);
     }
     break;
//****************************************************************     
     case 8: //INICIAL APELLIDO
     if (valor0 == HIGH)
     {
      I=0;
      lcd.print("Has elegido <A-D>");
      delay(2000);
     }
     if (valor1 == HIGH)
     {
      I=1;
      lcd.print("Has elegido <E-L>");
      delay(2000);
     }
     if (valor2 == HIGH)
     {
      I=2;
      lcd.print("Has elegido <M-N>");
      delay(2000);
     }
     if (valor3 == HIGH)
     {
      I=3;
      lcd.print("Has elegido <O-Z>");
      delay(2000);
     }
     I=4;
     lcd.print("No has elegido nada");
     for(int t=0; t <= 18; t++)
     {
      lcd.scrollDisplayLeft();
      delay(800);
     }
     break;
    }
  }
//LECTURA TERMINADA
//ECUACIÓN
  long id = A*100000000 + B*10000000 + C*1000000 + D*100000 + E*10000 + F*1000 + G*100 + H*10 + I;
  limpiars;
  alinicio;
  delay(1000);
  lcd.print("    CONECTANDO    ");
  lcd.setCursor(0, 1);
  lcd.print("     CON LOS ASTROS     ");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);
  limpiars;
  alinicio;
  lcd.print("  CONECTANDO   ");
  lcd.setCursor(0, 1);
  lcd.print("CON LOS ASTROS");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);
  lcd.print(".");
  delay(500);
  limpiars;
  alinicio;
  lcd.print("$ñ3@/¬&!ñªÇ¿:-%$€");
  lcd.setCursor(0, 1);
  lcd.print("ñÇ^·%Çª€ª&%/-|^@");
  delay(800);
  limpiars;
  alinicio;
  delay(1000);
  if (id == 1210101)
  {
    lcd.print("EUREKA!");
    delay(1500);
    limpiars;
    lcd.print("ERES MARCELO LUNA");
    delay(5000);
  }
  if(id > 13020110)
  {
    lcd.print("No te conozco");
    lcd.setCursor(0, 1);
    lcd.print("Lo siento, prueba otra vez!");
    for(int t=0; t <= 18; t++)
     {
      lcd.scrollDisplayLeft();
      delay(800);
     }
    delay(3000);
  }
  do
  {
    limpiars;
    alinicio;
    lcd.print(".");
    delay(500);
    lcd.print(".");
    delay(500);
    lcd.print(".");
    delay(500);
  } while (pin0 == LOW);
}

