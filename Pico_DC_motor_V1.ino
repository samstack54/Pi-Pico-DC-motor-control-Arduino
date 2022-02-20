// DC motor rotation control with TB6612

 int AIN2 = 8 ;
 int AIN1 = 9 ;
 int PWM  = 10 ;

 void setup() {
  pinMode(AIN2, OUTPUT) ;
  pinMode(AIN1, OUTPUT) ;
  pinMode(PWM, OUTPUT) ;
  analogWrite(PWM, 200) ; // Max = 255
 }

 void loop() {
  Run_mode(1,0) ; // Rotate 1 direction
  Run_mode(0,0) ; // Stop
  Run_mode(0,1) ; // Rotate -1 direction
  Run_mode(0,0) ; 
 }

 void Run_mode(int IN1, int IN2) {
  digitalWrite(AIN1, IN1) ;
  digitalWrite(AIN2, IN2) ;
  delay(1000) ;
 }
