int r=9;
int b=10;
int g=11;
int d=500;
void setup() {
pinMode (r, OUTPUT);
pinMode (b, OUTPUT);
pinMode (g, OUTPUT);
digitalWrite(r,1);
delay(d);
digitalWrite(r,0);
digitalWrite(b,1);
delay(d);
digitalWrite(b,0);
digitalWrite(g,1);
delay(d);
digitalWrite(r,1);
digitalWrite(b,1);
digitalWrite(g,1);
delay(d);
digitalWrite(r,0);
digitalWrite(b,0);
digitalWrite(g,0);
}

void loop() {

}
