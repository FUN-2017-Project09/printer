byte val = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    val = Serial.read();
    if (val == 'p') {
      byte GsQr[] = { 0x1B,0x40 };
      Serial.write(GsQr, 2);
      Serial.println("**************************");
      Serial.println("ICAS割引適用!商品10%OFFです!");
      Serial.println("**************************");
      Serial.println("\r");
      Serial.println("Future University Hakodate");
      Serial.print("\r\r\r\r\r");
      val = 0;
      delay(1000);
    } else if (val == '0') {
      delay(1000);
    }
  }
}
