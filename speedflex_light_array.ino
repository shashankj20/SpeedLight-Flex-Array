//SPEEDFLEX LIGHT ARRAY//

const int potentiometerPin = A0; // Potentiometer pin
const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9}; // LED pins

void setup() {
  // Initialize LEDs as outputs
  for (int i = 0; i < 8; ++i) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Read the value from the potentiometer
  int potValue = analogRead(potentiometerPin);
  
  // Map the potentiometer value (0-1023) to the delay time (50-500 ms)
  int delayTime = map(potValue, 0, 1023, 500, 50);
  
  // Turn on LEDs
  for (int i = 0; i < 8; ++i) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
    digitalWrite(ledPins[i], LOW);
  }
}
