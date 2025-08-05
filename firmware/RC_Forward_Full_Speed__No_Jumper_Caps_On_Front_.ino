//Reversed wheel rotation (goes forward with the controlled wheel speed in the front of the car) for 3 seconds

// Rear Motor Pins (L298N #1)
const int IN1_rear = 7;
const int IN2_rear = 8;
const int IN3_rear = 9;
const int IN4_rear = 10;
const int ENA_rear = 5;
const int ENB_rear = 6;

// Front Motor Pins (L298N #2)
const int IN1_front = 3;
const int IN2_front = 4;
const int IN3_front = 11;
const int IN4_front = 12;

void setup() {
  // Set pin modes
  pinMode(IN1_rear, OUTPUT);
  pinMode(IN2_rear, OUTPUT);
  pinMode(IN3_rear, OUTPUT);
  pinMode(IN4_rear, OUTPUT);
  pinMode(ENA_rear, OUTPUT);
  pinMode(ENB_rear, OUTPUT);

  pinMode(IN1_front, OUTPUT);
  pinMode(IN2_front, OUTPUT);
  pinMode(IN3_front, OUTPUT);
  pinMode(IN4_front, OUTPUT);

  // Rear motors direction
  digitalWrite(IN1_rear, HIGH);
  digitalWrite(IN2_rear, LOW);
  digitalWrite(IN3_rear, LOW);
  digitalWrite(IN4_rear, HIGH);

  // Rear motors speed (0–255)
  analogWrite(ENA_rear, 255); // Rear Left Motor
  analogWrite(ENB_rear, 255); // Rear Right Motor

  // Front motors direction (full speed always with jumpers)
  digitalWrite(IN1_front, LOW);
  digitalWrite(IN2_front, HIGH);
  digitalWrite(IN3_front, HIGH);
  digitalWrite(IN4_front, LOW);

  delay(3000);

  // STOP all motors
  digitalWrite(IN1_rear, LOW);
  digitalWrite(IN2_rear, LOW);
  digitalWrite(IN3_rear, LOW);
  digitalWrite(IN4_rear, LOW);

  digitalWrite(IN1_front, LOW);
  digitalWrite(IN2_front, LOW);
  digitalWrite(IN3_front, LOW);
  digitalWrite(IN4_front, LOW);

  analogWrite(ENA_rear, 0);
  analogWrite(ENB_rear, 0);
}

void loop() {
  // No repeating logic needed
}
