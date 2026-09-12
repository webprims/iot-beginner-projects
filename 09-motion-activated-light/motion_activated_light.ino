// ESP32 motion-activated light using a PIR sensor.
// PIR OUT -> GPIO 27
// LED -> GPIO 2 (through a resistor)

const int PIR_PIN = 27;
const int LED_PIN = 2;

unsigned long lastMotionAt = 0;
const unsigned long LIGHT_ON_TIME = 10000; // 10 seconds

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  bool motionDetected = digitalRead(PIR_PIN) == HIGH;

  if (motionDetected) {
    lastMotionAt = millis();
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Motion detected -> light ON");
  }

  if (millis() - lastMotionAt > LIGHT_ON_TIME) {
    digitalWrite(LED_PIN, LOW);
  }

  delay(100);
}
