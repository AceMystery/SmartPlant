void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);// open serial port, set the baud rate as 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val = analogRead(0);
  if (val < 300) {
  Serial.println("Plant is below 300 moisture level, Water required");
  digitalWrite(LED_BUILTIN, HIGH);
  }
  
  else {
  Serial.println(val);
  }
  delay(1000);
}
