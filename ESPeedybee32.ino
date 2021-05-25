
#include "BluetoothSerial.h"

#define RX2 16
#define TX2 17

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RX2, TX2);
  SerialBT.begin("ESPeedybee32"); 
  Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {
  if (Serial2.available()) {
    SerialBT.write(Serial2.read());
  }
  if (SerialBT.available()) {
    Serial2.write(SerialBT.read());
  }
  delay(1);
}
