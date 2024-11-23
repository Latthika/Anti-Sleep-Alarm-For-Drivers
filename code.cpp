int eye=5; 
int buzzer=4; 
int relay=6; 
int led=3; 
 
 int count=0;   
 boolean state = true; 
  
void setup() { 
  // put your setup code here, to run once: 
  Serial.begin(9600); 
pinMode(eye,INPUT); 
pinMode(buzzer,OUTPUT); 
pinMode(relay,OUTPUT); 
pinMode(led,OUTPUT); 
} 
void loop() { 
  // put your main code here, to run repeatedly: 
int ey=digitalRead(eye); 
Serial.println(ey); 
delay(500); 
if (ey==0){   
   digitalWrite(buzzer,HIGH); 
   digitalWrite(relay,LOW);  
      digitalWrite(led,HIGH);  
  }   
 else 
 { 
  digitalWrite(buzzer,LOW); 
  digitalWrite(relay,HIGH);  
   digitalWrite(led,LOW);  
  } 
 }
