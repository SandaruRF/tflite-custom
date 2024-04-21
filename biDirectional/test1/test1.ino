int prev=0;
int current;
int q=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btnVal = digitalRead(8);
  current = btnVal;
  if (prev==0 && current==1 && q==0){
    q = 1;
  }else if (prev==0 && current==1 && q==1){
    q = 0;
  }
  prev = current;

//  Serial.print(btnVal);
//  Serial.print(", ");
//  Serial.print(prev);
//  Serial.print(", ");
  Serial.println(q);
  delay(10);
}
