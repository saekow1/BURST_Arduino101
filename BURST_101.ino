//BURST: Arduino 101
//This program will control LED(s) ON OFF

//syntax- #define varName pinNum
#define redLed 13
#define greenLed 11

//declaring delaytime (in ms)
int delayTime = 1000;

void setup() 
{
  // put your setup code here, to run once:
  pinMode (redLed, OUTPUT);
  pinMode (greenLed, OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite (redLed, HIGH);
  digitalWrite (greenLed, HIGH);
  delay (delayTime);

  digitalWrite (redLed, LOW);
  digitalWrite (greenLed, LOW);
  delay (delayTime);

}


/*
void setup() 
{
  //setting up 
  //syntax- pinMode (pinNum, mode);
  pinMode (13, OUTPUT); //declaring the pinNumber's Mode


}

void loop() 
{
  //syntax- digitalWrite (pinNum, value)
  digitalWrite (13, HIGH);

  digitalWrite (13, LOW);
  
  delay (3000);

}


*/