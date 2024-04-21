//int q;
//  int prev=0;
//  int current;

int prev=0;
int cur=0;
int q;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int btnVal = digitalRead(8);
  if(btnVal==1){
    if(cur==1){
          q=0;}
          else{q=1;}
     
        cur=q;
        prev=cur;}
    
   
//  current = btnVal;
//  if (prev==0 && current==1 && q==0){
//    q = 1;
//  }else if (prev==1 && current==1 && q==1){
//    q = 0;
//  }
//  prev = current;

  Serial.print(btnVal);
  Serial.print(", ");
  Serial.print(prev);
  Serial.print(", ");
  Serial.println(q);
  delay(10);
}
