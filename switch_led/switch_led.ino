const int buttonPin=2;
const int rLED=3;
const int bLED=4;
const int gLED=5;

int state=0;
int ledcolor=0;

bool pressbutton= 0;
//String currentcolor="led";

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  pinMode(rLED,OUTPUT);
  pinMode(bLED,OUTPUT);
  pinMode(gLED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  state=digitalRead(buttonPin);
  //Serial.print("currentcolor:");
  //Serial.println(currentcolor);
  /*if(state==0){
    ledcolor = ledcolor + 1;
    delay(100);
  }*/
  if(state==1&&!pressbutton){
    ledcolor = ledcolor + 1;
    pressbutton=true;
    //Serial.print("on");
  }
  if(state==0&&pressbutton){
    pressbutton=false;
  }

    if(ledcolor==0){
    //currentcolor="LED off";
    digitalWrite(rLED,1);
    digitalWrite(bLED,1);
    digitalWrite(gLED,1);
    delay(1000);
    
  }
  else if(ledcolor==1){
   //currentcolor="Red";
    digitalWrite(rLED,0);
    digitalWrite(bLED,1);
    digitalWrite(gLED,1);
  }
  else if(ledcolor==2){
    //currentcolor="Green";
    digitalWrite(rLED,1);
    digitalWrite(bLED,0);
    digitalWrite(gLED,1);
  }
  else if(ledcolor==3){
    //currentcolor="Blue";
    digitalWrite(rLED,1);
    digitalWrite(bLED,1);
    digitalWrite(gLED,0);
  }
  else if(ledcolor==4){
   //currentcolor="purple";
    digitalWrite(rLED,0);
    digitalWrite(bLED,0);
    digitalWrite(gLED,1);
  }
  else if(ledcolor==5){
    //currentcolor="Yellow";
    digitalWrite(rLED,0);
    digitalWrite(bLED,1);
    digitalWrite(gLED,0);
  }
  else if(ledcolor==6){
    //currentcolor="Cyan";
    digitalWrite(rLED,1);
    digitalWrite(bLED,0);
    digitalWrite(gLED,0);
  }
  else if(ledcolor==7){
    //currentcolor="White";
    digitalWrite(rLED,0);
    digitalWrite(bLED,0);
    digitalWrite(gLED,0);
  }
  else if(ledcolor==8){
    ledcolor=0;
  }
}
