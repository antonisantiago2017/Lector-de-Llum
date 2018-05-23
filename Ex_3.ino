const int led0 = 9;          // donar nom al pin 9 de l’Arduino
const int led1=10;
const int led2=11;
const int ldr0=A0;         // donar nom al pin A0 de l’Arduino
const int ldr1=A1;
const int ldr2=A2;

int velocitat = 20;          // velocitat de l'acció en ms
int valLdr0, valLdr1, valLdr2;                 // guardar valor del ldr

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr
  Serial.print(valLdr0);
  Serial.print("      ");
  if (valLdr0>850)
  {
    valLdr0 = 0;
  }
  else
  {
    valLdr0 = map(valLdr0, 80, 1000, 255, 0);   // mapejar valor de 0-1023 a 0-255
  }
  
  analogWrite(led0, valLdr0);    // actualitzar l'estat del led





  
  valLdr1 = analogRead(ldr1);   // llegir valor ldr
  Serial.print(valLdr1);
  Serial.print("      ");
  if (valLdr1>800)
  {
    valLdr1 = 0;
  }
  else
  {
    valLdr1 = map(valLdr1, 80, 1000, 255, 0);   // mapejar valor de 0-1023 a 0-255
  }
  
  analogWrite(led1, valLdr1);    // actualitzar l'estat del led




  valLdr2 = analogRead(ldr2);   // llegir valor ldr
  Serial.println(valLdr2);
  if (valLdr2>800)
  {
    valLdr2 = 0;
  }
  else
  {
    valLdr2 = map(valLdr2, 80, 1000, 255, 0);   // mapejar valor de 0-1023 a 0-255
  }
  
  analogWrite(led2, valLdr2);    // actualitzar l'estat del led

  delay(400);
  
  }

