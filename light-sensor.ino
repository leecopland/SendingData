int light_sensor = A0;  // define Sensor pin
int measurement = 0;    // initialise variable for reading measurement

void setup() {
  pinMode(light_sensor, INPUT); // define what to do with chosen pin
  Serial.begin(9600);           // initialise serial port
}

void loop() {
    String measurement = String(analogRead(light_sensor));  //read light measurement
    Particle.publish("measurement", measurement, PRIVATE);  //publish measurement
    delay(30000);                                           // Wait for 30 seconds
}