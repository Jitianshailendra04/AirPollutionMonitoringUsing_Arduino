void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int a=analogRead(A1);
Serial.println(a);
int percentage= map(a,300,680,0,100);
Serial.println(percentage);
delay(2000);

}
