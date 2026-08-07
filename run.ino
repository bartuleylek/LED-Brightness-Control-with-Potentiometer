#define led 9
#define potPin A0

void setup() {
  pinMode(led, OUTPUT);
  pinMode(potPin, INPUT);

}

void loop() {
  int potValue = analogRead(potPin);

  // analogRead() reads the potentiometer using Arduino Uno's 10-bit ADC, which gives 1024 possible values from 0 to 1023.

  // analogWrite() uses 8-bit PWM control, which gives 256 possible values from 0 to 255.

  // map() converts the potentiometer range from 0-1023 to the PWM brightness range of 0-255.
  int brightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(led, brightness);

}