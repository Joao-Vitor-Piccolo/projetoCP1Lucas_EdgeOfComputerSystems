int led_3 = 13;
int led_2 = 12;
int led_1 = 11;
int ldr = A0;
int ldrVal = 0;
int piezo = 2;

void setup(){
  Serial.begin(9600);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(piezo, OUTPUT);
}

void loop(){
  ldrVal = analogRead(ldr);
  Serial.println(ldrVal);
  if (ldrVal < 200){
  digitalWrite(piezo, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_1, HIGH);
  }
  else if (ldrVal < 600){
  digitalWrite(piezo, LOW);
  digitalWrite(led_1, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_2, HIGH);
  }
  else{
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(piezo, HIGH);
  }
}

