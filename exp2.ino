#include <PulseSensorPlayground.h>
PulseSensorPlayground pulseSensor;
const int pulsePin = A0; 
void setup() {
  Serial.begin(9600);
  pulseSensor.analogInput(pulsePin);
  pulseSensor.setThreshold(550); 
  pulseSensor.begin();
}
void loop() {
  int signal = pulseSensor.getBeatsPerMinute();
  if (signal > 0) {
    Serial.print("Heart Rate: ");
    Serial.print(signal);
    Serial.println(" bpm");
  } else {
    Serial.println("No pulse detected.");
  }
  delay(1000);
}
