#include "IRremote.h"

int RECV_PIN = 11;
int ledPin = 13;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
 pinMode(RECV_PIN, INPUT);
 pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
if (irrecv.decode(&results)) {
Serial.println(results.value, HEX);

if (results.value == 0xA32AB931){

  digitalWrite(ledPin,LOW);
  Serial.println("Inside if");
  
}

else if (results.value == 0x371A3C86) {

  digitalWrite(ledPin,HIGH);
  Serial.println("elif");
  
}

irrecv.resume(); // Receive the next value
}
}

