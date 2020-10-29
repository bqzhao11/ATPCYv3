int command;
int r_motor = 13;
int l_motor = 12;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
  pinMode(r_motor, OUTPUT);
  pinMode(l_motor, OUTPUT);
  digitalWrite(r_motor, LOW); 
  digitalWrite(l_motor, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()){
    command = Serial.read();
  }
  if (command == '0'){
    digitalWrite(r_motor, LOW);
    digitalWrite(l_motor, LOW);
  } else if (command == '1'){
    digitalWrite(r_motor, HIGH);
    digitalWrite(l_motor, HIGH);
  } else if (command == '2'){
    digitalWrite(r_motor, LOW);
    digitalWrite(l_motor, HIGH);
  } else if (command == '3'){
    digitalWrite(r_motor, HIGH);
    digitalWrite(l_motor, LOW);
  }
}
