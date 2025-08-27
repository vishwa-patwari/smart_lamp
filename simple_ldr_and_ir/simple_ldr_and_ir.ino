#define ldr 5
#define ir  15
#define led 2


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(ldr,INPUT);
pinMode(ir,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(ldr));
if(digitalRead(ldr)== HIGH || digitalRead (ir) == LOW){
  digitalWrite(led,LOW);
  
  }
  else {
    digitalWrite(led,HIGH);
    }
}
