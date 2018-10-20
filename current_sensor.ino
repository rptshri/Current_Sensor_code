int sense= A0;
int acsinitial=2.5;
int volt;
float current;
int val; 

void setup() {
  Serial.begin (9600);
     
}

void loop() {
val= analogRead(sense);
Serial.println(val);
volt= (val/1024)*5;
current=(volt-acsinitial)/100;
Serial.print("volts:: ");
Serial.println(volt);
Serial.print("current:: ");
Serial.println(current);
delay(500); 
}
