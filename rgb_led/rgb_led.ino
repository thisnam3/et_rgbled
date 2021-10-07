int r=9;
int b=10;
int g=11;
int d=500;
int poti=0;

byte feny=0;
byte irany=1;

void setup() {
 pinMode (r, OUTPUT);
 pinMode (b, OUTPUT);
 pinMode (g, OUTPUT);
 
 pinMode (A0, INPUT);
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
  feny=map(poti,0,1023,0,155);
  
  Serial.print("Analóg érték:");
  Serial.println(analogRead(A0));
  Serial.print("; Feszültség:" );
  Serial.print(feny);
  
  analogWrite(r,feny); //feny 0-255
  
  /*if (feny==255) irany=-1;
  if (feny==0) irany=1;
  feny=feny+irany;
  delay(30);*/
}
