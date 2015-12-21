int ledRojo = 9;
int ledVerde = 10;
int ledAzul = 11;
int ldr = A0;
int poten = A7;

int vv = 0;
int vr = 0;
int va = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledAzul, HIGH);
  inicio();

  digitalWrite(ledVerde, LOW);
  vv = analogRead(ldr);
  delay(analogRead(poten));
  digitalWrite(ledVerde, HIGH);


  digitalWrite(ledRojo, LOW);
  vr = analogRead(ldr);
  delay(analogRead(poten));
  digitalWrite(ledRojo, HIGH);

  digitalWrite(ledAzul, LOW);
  va = analogRead(ldr);
  delay(analogRead(poten));
  digitalWrite(ledAzul, HIGH);
  
  Serial.println(vr);
  Serial.println(vv);
  Serial.println(va);
}


void loop() {
  analogWrite(ledVerde,map(vv,0, 1023, 255, 0));
  analogWrite(ledRojo,map(vr,0, 1023, 255, 0));
  analogWrite(ledAzul,map(va,0, 1023, 255, 0));
  delay(5);
}

void inicio(){
  digitalWrite(ledVerde, LOW);
  delay(500);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledRojo,LOW);
  delay(500);
  digitalWrite(ledRojo,HIGH);
  digitalWrite(ledAzul,LOW);
  delay(500);
  digitalWrite(ledAzul,HIGH);
}
