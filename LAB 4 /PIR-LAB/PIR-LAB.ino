int led = 13;                
int sensor = 6;              
int state = LOW;             
int val = 0;                 

void setup() {
  pinMode(led, OUTPUT);     
  pinMode(sensor, INPUT);    
  Serial.begin(9600);        
}

void loop(){
  val = digitalRead(sensor);   
  if (val == HIGH) {           
    digitalWrite(led, HIGH);   
    delay(10);               
    
    if (state == LOW) {
      Serial.println("Motion detected!"); 
      state = HIGH;       
    }
  } 
  else {
      digitalWrite(led, LOW); 
      delay(10);             
      
      if (state == HIGH){
        Serial.println("Motion stopped!");
        state = LOW;       
    }
  }
}
