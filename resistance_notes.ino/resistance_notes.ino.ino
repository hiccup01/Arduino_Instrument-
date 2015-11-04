int resistance = 0;
int test = 0;
int test2 = 0;
const int tonePin = 9;
const int resistancePin = 7;
void setup() {
         // declear vars
        
        const int powerPin = 8;
        pinMode(powerPin, OUTPUT); // Set pin 8 to output current
        digitalWrite(powerPin, HIGH);
        pinMode(resistancePin, INPUT); // Set pin 7 to be an input
        Serial.begin(9600);
}

void loop() {
  test2 = 0;
  while(test2 < 40); {
  resistance = digitalRead(resistancePin);
  test = test + resistance;
  test2 = test2 + 1;
  }
  if (test = 40) {
    tone(tonePin, 50);
  }
}
