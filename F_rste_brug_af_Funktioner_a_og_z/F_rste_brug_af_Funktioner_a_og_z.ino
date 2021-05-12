int a=0;
int z=0;

void setup(){
  pinMode(2,INPUT);
  Serial.begin(9600); 
}

int velocity(){
  z=digitalRead(2);
  return z;
}

void loop() {
  a=velocity();
  Serial.println("a er:");
  Serial.println(a);
  }
