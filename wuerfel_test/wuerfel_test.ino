const int led1 = 0;
const int led2 = 3;
const int led3 = 4;
const int led4 = 1;
const int swPin = 2;
int zahl;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(swPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(swPin) == LOW) {
    
    for(int i=1; i<7; i++) {
      
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    
      switch(zahl=random(0,6)) {
        case 0:
          digitalWrite(led4, HIGH);
        break;
        
        case 1:
          digitalWrite(led3, HIGH);
        break;
        
        case 2:
          digitalWrite(led3, HIGH);
          digitalWrite(led4, HIGH);
        break;
        
        case 3:
          digitalWrite(led1, HIGH);
          digitalWrite(led3, HIGH);
        break;
        
        case 4:
          digitalWrite(led1, HIGH);
          digitalWrite(led3, HIGH);
          digitalWrite(led4, HIGH);
        break;
        
        case 5:
          digitalWrite(led1, HIGH);
          digitalWrite(led2, HIGH);
          digitalWrite(led3, HIGH);
        break;
      }
      
      delay(i*100);
    }
  }
}