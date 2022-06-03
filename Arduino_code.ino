// leds
int led1 = 9;
int led2 = 10;
int led3 = 11;
int led4 = 12;
int led5 = 13;

// pir sensors
int sensor1 = 2;
int sensor2 = 3;
int sensor3 = 4;
int sensor4 = 5;
int sensor5 = 6;

// ldr sensor
int ldr = A0;
int value=0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
  
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
//  delay(2000);
  //read ldr sensor
  value=analogRead(ldr);
  Serial.print("LDR value is : ");
  Serial.println(value);
  
  int sensorval1 = digitalRead(sensor1);
  Serial.print(sensorval1);
  Serial.print(" ");
  int sensorval2 = digitalRead(sensor2);
  Serial.print(sensorval2);
  Serial.print(" ");
  int sensorval3 = digitalRead(sensor3);
  Serial.print(sensorval3);
  Serial.print(" ");
  int sensorval4 = digitalRead(sensor4);
  Serial.print(sensorval4);
  Serial.print(" ");
  int sensorval5 = digitalRead(sensor5);
  Serial.print(sensorval5);
  Serial.println(" ");
  
  if(value<300) {
    // led 1
    if (sensorval1 == LOW) {
      digitalWrite(led1, HIGH);
    }
    else {
      digitalWrite(led1, LOW);
    }
    
    // led 2
    if (sensorval2 == LOW) {
      digitalWrite(led2, HIGH);
    }
    else {
      digitalWrite(led2, LOW);
    }
    
    // led 3
    if (sensorval3 == LOW) {
      digitalWrite(led3, HIGH);
    }
    else {
      digitalWrite(led3, LOW);
    }
    
    // led 4
    if (sensorval4 == LOW) {
      digitalWrite(led4, HIGH);
    }
    else {
      digitalWrite(led4, LOW);
    }
    
    // led 5
    if (sensorval5 == LOW) {
      digitalWrite(led5, HIGH);
    }
    else {
      digitalWrite(led5, LOW);
    }
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
}
