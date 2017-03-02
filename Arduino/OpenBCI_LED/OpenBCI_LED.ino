int led = 9;
int brightness = 0;

void setup() { 
  Serial.begin(115200);

  pinMode(led, OUTPUT);
} 


void loop() {            // Loop through motion tests
  analogWrite(led, brightness);
  delay(30);

}

void serialEvent() {
  while (Serial.available()) {
    int newData = Serial.read();
    brightness = (int)newData;
  }
}

