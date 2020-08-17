// Faster Processing Ideas with PWM.
// Since the Binary 01000001 = A , takes up 8 bit of proceess time, photon just take 1/8 bit to process.
// 1/255 PWM(HIGH) is = A or 255/1 bit .
// While current computer is processing the letter "A" photon processing had made up a full word .
// There is countless numbers in Analog read/write on higer resolutions (32bit/64bit/128bit..etc.).
// Faster than a morse code.
// Program derived from fade sketch.

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is

void setup() {
 
  Serial.begin(9600);
  pinMode(led, OUTPUT); // declare pin 9 to be an output:
}

void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness to makeup a word ( HELLO WORLD! )
  brightness = 8;	  photon();
  brightness = 5;   photon();
  brightness = 12;  photon();
  brightness = 12;  photon();
  brightness = 15;  photon();
  Serial.print(' ');
  brightness = 23;  photon();
  brightness = 15;  photon();
  brightness = 18;  photon();
  brightness = 12;  photon();
  brightness = 4;   photon();
  brightness = 27;  photon();
  Serial.println();

}

void photon(){
  if(brightness == 1) {Serial.print('A');}//Decode 27/255 division of binary 1(HIGH) into ASCII.
  if(brightness == 2) {Serial.print('B');}
  if(brightness == 3) {Serial.print('C');}
  if(brightness == 4) {Serial.print('D');}
  if(brightness == 5) {Serial.print('E');}
  if(brightness == 6) {Serial.print('F');}
  if(brightness == 7) {Serial.print('G');}
  if(brightness == 8) {Serial.print('H');}
  if(brightness == 9) {Serial.print('I');}
  if(brightness == 10) {Serial.print('J');}
  if(brightness == 11) {Serial.print('K');}
  if(brightness == 12) {Serial.print('L');}
  if(brightness == 13) {Serial.print('M');}
  if(brightness == 14) {Serial.print('N');}
  if(brightness == 15) {Serial.print('O');}
  if(brightness == 16) {Serial.print('P');}
  if(brightness == 17) {Serial.print('Q');}
  if(brightness == 18) {Serial.print('R');}
  if(brightness == 19) {Serial.print('S');}
  if(brightness == 20) {Serial.print('T');}
  if(brightness == 21) {Serial.print('U');}
  if(brightness == 22) {Serial.print('V');}
  if(brightness == 23) {Serial.print('W');} 
  if(brightness == 24) {Serial.print('X');}
  if(brightness == 25) {Serial.print('Y');}
  if(brightness == 26) {Serial.print('Z');}
  if(brightness == 27) {Serial.print('!');}
  }
