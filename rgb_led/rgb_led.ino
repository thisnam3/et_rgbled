int r=9;
int b=10;
int g=11;
int d=500;
int poti=0;
int gomb=2;

byte feny=0;
byte irany=1;

void setup() {
 pinMode (r, OUTPUT);
 pinMode (b, OUTPUT);
 pinMode (g, OUTPUT);
 pinMode (gomb, INPUT_PULLUP);
 
 pinMode (A0, INPUT);
 pinMode (A1, INPUT);
 pinMode (A2, INPUT);
 Serial.begin(9600);

 digitalWrite(r,1);
 delay(d);

 digitalWrite(r,0);
 digitalWrite(b,1);
 delay(d);

 digitalWrite(b,0);
 digitalWrite(g,1);
 delay(d);

 digitalWrite(r,0);
 digitalWrite(b,0);
 digitalWrite(g,0);

/*analogWrite(r,137);
analogWrite(b,90);
analogWrite(g,67);*/
}

void loop() {

  poti=analogRead(A0); //0-1023
  feny=map(poti,0,1023,0,255);
  analogWrite(r,feny); //feny 0-255
  
  poti=analogRead(A1); //0-1023
  feny=map(poti,0,1023,0,255);
  analogWrite(b,feny); //feny 0-255
  
  poti=analogRead(A2); //0-1023
  feny=map(poti,0,1023,0,255);
  analogWrite(g,feny); //feny 0-255
  
  Serial.print("Analóg érték:");
  Serial.println(analogRead(A0));
  Serial.print("; Feszültség:" );
  Serial.print(feny);

  if (digitalRead(gomb)==0)
  {
    delay(60);
    if (digitalRead(gomb)==0){
      Serial.println("Gomb megnyomva!");
    }
  }
  
  
  
  /*if (feny==255) irany=-1;
  if (feny==0) irany=1;
  feny=feny+irany;
  delay(30);*/
}
