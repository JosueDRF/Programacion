int pot;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  pot=analogRead(34);
  // put your main code here, to run repeatedly:
  Serial.println(pot);
  delay(1000);
}
