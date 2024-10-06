// Define pin connections & motor's steps per revolution
const int dirPin = 2;
const int stepPin = 3;
const int stepsPerRevolution = 200;
const int Speed = 500; // 500 is max setting & when it was dancing

void setup() {
  // Declare pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}
void loop() {
  // Set motor direction clockwise
  digitalWrite(dirPin, HIGH);

  // Spin motor slowly
  while (1) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(Speed);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(Speed);
  }
  // delay(1000); // Wait a second

  // // Set motor direction counterclockwise
  // digitalWrite(dirPin, LOW);

  // // Spin motor quickly
  // for(int x = 0; x < stepsPerRevolution; x++)
  // {
  // 	digitalWrite(stepPin, HIGH);
  // 	delayMicroseconds(2000);
  // 	digitalWrite(stepPin, LOW);
  // 	delayMicroseconds(2000);
  // }
  // delay(1000); // Wait a second
}