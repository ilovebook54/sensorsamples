int sensorPin = A5; // select the input pin for the potentiometer
int ledPin = 13; // select the pin for the LED
int sensorValue = 0; // variable to store the value coming from the sensor

/*IRrecv irrecv(RECV_PIN);

decode_results results;

*/
void setup() {
  /*pinMode(RECV_PIN, INPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver*/
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(sensorPin);
  //digitalWrite(ledPin, HIGH);
  //delay(sensorValue);
  //digitalWrite(ledPin, LOW);
 // delay(sensorValue);
  Serial.println(sensorValue, DEC);


  if (sensorValue > 500)
  {
    digitalWrite(ledPin,HIGH) ;   
  }

  else if (sensorValue < 499)
  {
    digitalWrite(ledPin, LOW);
  }


  /*if (irrecv.decode(&results)) {
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
}*/
}
