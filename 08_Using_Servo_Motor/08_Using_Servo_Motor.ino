/***********************************************************
Project 07: Using a Servo motor
Description:   The servo motor are rotated to 15 degrees, 30 degrees, 45 degrees, 60 degrees, 75 degrees,
               90 degrees and goes back to 75 degrees, 60 degrees, 45 degrees,30 degrees, 15 degrees,
               0 degrees, and then from 0 degrees to 180 degrees and from 180 degrees to 0 degrees.
Company: Texoham eLearning Platform
Website: www.texoham.com/elearning
***********************************************************/

#include <Servo.h>
Servo myServo;
const int buttonpin  = 6;
int buttonState =0;
int count =0;
void setup()
{
  Serial.begin(9600);
  pinMode(buttonpin,INPUT_PULLUP);
  myServo.attach(9);                            //attach the servo on pin 9 to servo
  myServo.write(0);                             //rotates to 0 degrees 
  delay(1000);                                  //wait for a second
}

void loop()
{  
  int value =digitalRead(buttonpin);
  if (value == LOW)
  {
    count++;
    delay(1000);
  
  Serial.println("button is pressed");
  }
  if(count==0){
  myServo.write(15);                            //goes to 15 degrees 
  delay(1000);                                  //wait for a second
  }
  else if(count ==1){
  myServo.write(30);                            //goes to 30 degrees 
  delay(1000);                                  //wait for a second.
  }
  else if(count ==2){
  myServo.write(45);                            //goes to 45 degrees 
  delay(1000);
  }//wait for a second.
else if(count ==3){
  myServo.write(60);                            //goes to 60 degrees 
  delay(1000);     
}//wait for a second.
else if(count ==4){
  myServo.write(75);                            //goes to 75 degrees 
  delay(1000);     
}//wait for a second.
else if(count ==5){
  myServo.write(90);                            //goes to 90 degrees
  delay(1000);     
}//wait for a second
else if(count ==6){
  myServo.write(75);                            //back to 75 degrees 
  delay(1000);     
}//wait for a second.
else if(count ==7){ 
  myServo.write(60);                            //back to 60 degrees
  delay(1000);     
}//wait for a second.
else if(count ==8){
  myServo.write(45);                            //back to 45 degrees
  delay(1000);     
}//wait for a second.
else if(count ==9){
  myServo.write(30);                            //back to 30 degrees
  delay(1000);     
}//wait for a second.
else if(count ==10){
  myServo.write(15);                            //back to 15 degrees 
  delay(1000);      
}//wait for a second
else if(count ==11){
  myServo.write(0);                             //back to 0 degrees 
  delay(1000);
}
  
}
