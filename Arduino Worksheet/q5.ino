#define echo_pin 2
#define trig_pin 3
long duration_0;
int distance_0;

void setup()  {
pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  Serial.begin(9600);
  Serial.println("ultrasonic distance fin....");
}
void loop(){
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);
  duration_0 = pulseIn(echo_pin, HIGH);
  distance_0 = duration_0 * 0.034/2;
  Serial.print("distance:");
  Serial.print(distance_0);
  Serial.println("cm");
}