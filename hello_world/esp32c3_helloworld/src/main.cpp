// #include <Arduino.h>

// // put function declarations here:
// int myFunction(int, int);

// void setup() {
//   // put your setup code here, to run once:
//   int result = myFunction(2, 3);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }

#include <Arduino.h>

void setup() {
  Serial.begin(115200); // Initialize serial communication
}
void loop() {
  Serial.println("Hello, World!"); // Print "Hello, World!" to the Serial Monitor
  delay(2000); // Wait for 2 second

  Serial.println("Hello World 2"); // Print "Hello, World!" to the Serial Monitor
  delay(2000); // Wait for 1 second
}