//define arduino pins numbers 
int pot =A0;
// declare variables 
int value =0;
float result =0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // make pin A0 as an input pin
  pinMode(pot,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 // read the data from the A0 pin 
value = analogRead(pot);

//  normalize data to be between 0v and 5 v
result = (value*5)/1023.0;

// print the result in screen 
Serial.print(result);
Serial.println();

// wait for 200 ms 
delay(200);
}
