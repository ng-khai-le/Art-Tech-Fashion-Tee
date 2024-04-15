#include <Servo.h>


// Declare servo hardware pins
const int servo_1_pin=12;
const int servo_2_pin=11;
const int servo_3_pin=10;
const int servo_4_pin=9;
// Declare push button interrupt pin
const int button_int = 14; 

// create servo object to control servo
Servo servo_1;  
Servo servo_2;
Servo servo_3;
Servo servo_4;

int current_mode = 1;
int max_mode = 6;

int delay_mode5=500;

void interrupt(){
  if (current_mode < max_mode){
    current_mode++;
  }else if (current_mode == max_mode){
    current_mode = 1;
  }
  Serial.println(current_mode);
}

void mode_1(){
  for (int pos = 10; pos < 170; pos += 1) { 
    servo_1.write(pos);  
    servo_2.write(pos);      
    delay(15);
  }
  for (int pos = 170; pos > 10; pos -= 1) { 
    servo_1.write(pos);
    servo_2.write(pos); 
    delay(15);
  }
}


void mode_2(){
  for (int pos = 10; pos < 170; pos += 10) { 
    servo_1.write(pos);  
    servo_2.write(pos);      
    delay(1000);
  }
  for (int pos = 170; pos > 10; pos -= 10) { 
    servo_1.write(pos);
    servo_2.write(pos); 
    delay(1000);
  } 
}


void mode_3(){
  for (int pos = 10; pos < 170; pos += 20) { 
    servo_1.write(pos);  
    servo_2.write(pos);      
    delay(1000);
  }
  for (int pos = 170; pos > 10; pos -= 20) {
    servo_1.write(pos);
    servo_2.write(pos); 
    delay(1000);
  } 
}


void mode_4(){
  servo_1.write(10);
  servo_2.write(10); 
  delay(1000);
  servo_1.write(170);
  servo_2.write(170); 
} 

// random mode
void mode_6(){
  int num = random(1, 6);
  switch(num){
    case 1:
      mode_1();
      break;
    case 2:
      mode_2();
      break;
    case 3:
      mode_3();
      break;
    case 4:
      mode_4();
      break;
    case 5:
      mode_5();
      break;
    case 6:
      mode_6();
      break;
    default:
      mode_1();
      break;
  }
} 


void setup() {
  Serial.begin(9600);
  servo_1.attach(servo_1_pin);
  servo_2.attach(servo_2_pin); 
  servo_3.attach(servo_3_pin);
  servo_4.attach(servo_4_pin);
  attachInterrupt(digitalPinToInterrupt(button_int), interrupt, RISING); 
  servo_3.write(45);
  servo_4.write(98); 
}

void loop() {
  Serial.println(current_mode);
  switch (current_mode){
    case 1:
      mode_1();
      break;
    case 2:
      mode_2();
      break;
    case 3:
      mode_3();
      break;
    case 4:
      mode_4();
      break;
    case 5:
      mode_5();
      break;
    case 6:
      mode_6();
      break;
    default:
      mode_1();
      break;
  }
  delay(1000);
}


void mode_5(){
  // 1
  servo_1.write(10);
  servo_2.write(10); 
  delay(delay_mode5);
  servo_1.write(30);
  servo_2.write(30); 
  delay(delay_mode5);
  servo_1.write(10);
  servo_2.write(10); 
  delay(delay_mode5);
  // 2
  servo_1.write(30);
  servo_2.write(30); 
  delay(delay_mode5);
  servo_1.write(50);
  servo_2.write(50); 
  delay(delay_mode5);
  servo_1.write(30);
  servo_2.write(30); 
  delay(delay_mode5);
  // 3
  servo_1.write(50);
  servo_2.write(50); 
  delay(delay_mode5);
  servo_1.write(70);
  servo_2.write(70); 
  delay(delay_mode5);
  servo_1.write(50);
  servo_2.write(50); 
  delay(delay_mode5);
  // 4
  servo_1.write(70);
  servo_2.write(70); 
  delay(delay_mode5);
  servo_1.write(90);
  servo_2.write(90); 
  delay(delay_mode5);
  servo_1.write(70);
  servo_2.write(70); 
  delay(delay_mode5);
  // 5
  servo_1.write(90);
  servo_2.write(90); 
  delay(delay_mode5);
  servo_1.write(110);
  servo_2.write(110); 
  delay(delay_mode5);
  servo_1.write(90);
  servo_2.write(90); 
  delay(delay_mode5);
  // 6
  servo_1.write(110);
  servo_2.write(110); 
  delay(delay_mode5);
  servo_1.write(130);
  servo_2.write(130); 
  delay(delay_mode5);
  servo_1.write(110);
  servo_2.write(110); 
  delay(delay_mode5);
  // 7
  servo_1.write(130);
  servo_2.write(130); 
  delay(delay_mode5);
  servo_1.write(150);
  servo_2.write(150); 
  delay(delay_mode5);
  servo_1.write(130);
  servo_2.write(130); 
  delay(delay_mode5); 
  // 8
  servo_1.write(150);
  servo_2.write(150); 
  delay(delay_mode5);
  servo_1.write(170);
  servo_2.write(170); 
  delay(delay_mode5);
  servo_1.write(150);
  servo_2.write(150); 
  delay(delay_mode5); 
  // 9
  servo_1.write(170);
  servo_2.write(170); 
  delay(delay_mode5);
  servo_1.write(150);
  servo_2.write(150); 
  delay(delay_mode5);
  servo_1.write(170);
  servo_2.write(170); 
  delay(delay_mode5); 
  // 10
  servo_1.write(150);
  servo_2.write(150); 
  delay(delay_mode5);
  servo_1.write(170);
  servo_2.write(170); 
  delay(delay_mode5);
  servo_1.write(150);
  servo_2.write(150); 
  delay(delay_mode5); 
  // 11
  servo_1.write(130);
  servo_2.write(130); 
  delay(delay_mode5);
  servo_1.write(150);
  servo_2.write(150); 
  delay(delay_mode5);
  servo_1.write(130);
  servo_2.write(130); 
  delay(delay_mode5); 
  // 12
  servo_1.write(110);
  servo_2.write(110); 
  delay(delay_mode5);
  servo_1.write(130);
  servo_2.write(130); 
  delay(delay_mode5);
  servo_1.write(110);
  servo_2.write(110); 
  delay(delay_mode5); 
  // 13
  servo_1.write(90);
  servo_2.write(90); 
  delay(delay_mode5);
  servo_1.write(110);
  servo_2.write(110); 
  delay(delay_mode5);
  servo_1.write(90);
  servo_2.write(90); 
  delay(delay_mode5); 
  // 14
  servo_1.write(70);
  servo_2.write(70); 
  delay(delay_mode5);
  servo_1.write(90);
  servo_2.write(90); 
  delay(delay_mode5);
  servo_1.write(70);
  servo_2.write(70); 
  delay(delay_mode5); 
  // 15
  servo_1.write(50);
  servo_2.write(50); 
  delay(delay_mode5);
  servo_1.write(70);
  servo_2.write(70); 
  delay(delay_mode5);
  servo_1.write(50);
  servo_2.write(50); 
  delay(delay_mode5); 
  // 16
  servo_1.write(30);
  servo_2.write(30); 
  delay(delay_mode5);
  servo_1.write(50);
  servo_2.write(50); 
  delay(delay_mode5);
  servo_1.write(30);
  servo_2.write(30); 
  delay(delay_mode5); 
  // 17
  servo_1.write(10);
  servo_2.write(10); 
  delay(delay_mode5);
  servo_1.write(30);
  servo_2.write(30); 
  delay(delay_mode5);
  servo_1.write(10);
  servo_2.write(10); 
  delay(delay_mode5); 
} 