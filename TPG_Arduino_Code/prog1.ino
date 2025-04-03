int byte1bit0 = 2;
int byte1bit1 = 3;
int byte1bit2 = 4;
int byte2bit0 = 5;
int byte2bit1 = 6;
int byte2bit2 = 7;
int instructionBit0 = 8;
int instructionBit1 = 9;
int instructionBit2 = 10;
void setup()
{
  pinMode(byte1bit0, OUTPUT);
  pinMode(byte1bit1, OUTPUT);
  pinMode(byte1bit2, OUTPUT);
  
  pinMode(byte2bit0, OUTPUT);
  pinMode(byte2bit1, OUTPUT);
  pinMode(byte2bit2, OUTPUT);
  
  pinMode(instructionBit0, OUTPUT);
  pinMode(instructionBit1, OUTPUT);
  pinMode(instructionBit2, OUTPUT);
}

void loop()
{
    digitalWrite(byte1bit0,HIGH);
    digitalWrite(byte1bit1,LOW);
    digitalWrite(byte1bit2,HIGH);
    
    digitalWrite(byte2bit0,LOW);
    digitalWrite(byte2bit1,HIGH);
    digitalWrite(byte2bit2,LOW);
 
    digitalWrite(instructionBit0,LOW);
    digitalWrite(instructionBit1,LOW);
    digitalWrite(instructionBit2,LOW);
    delay(1000*1.25);
    
    digitalWrite(instructionBit0,HIGH);
    digitalWrite(instructionBit1,LOW);
    digitalWrite(instructionBit2,LOW);
    delay(1000*1.25);
    
    digitalWrite(instructionBit0,LOW);
    digitalWrite(instructionBit1,HIGH);
    digitalWrite(instructionBit2,LOW);
    delay(1000*1.25);
    
    digitalWrite(instructionBit0,HIGH);
    digitalWrite(instructionBit1,HIGH);
    digitalWrite(instructionBit2,LOW);
    delay(1000*1.25);
    
    digitalWrite(instructionBit0,LOW);
    digitalWrite(instructionBit1,LOW);
    digitalWrite(instructionBit2,HIGH);
    delay(1000*1.25);
           
    digitalWrite(instructionBit0,HIGH);
    digitalWrite(instructionBit1,LOW);
    digitalWrite(instructionBit2,HIGH);
    delay(1000*1.25);
    
    digitalWrite(instructionBit0,LOW);
    digitalWrite(instructionBit1,HIGH);
    digitalWrite(instructionBit2,HIGH);
    delay(1000*1.25);
        
    digitalWrite(instructionBit0,HIGH);
    digitalWrite(instructionBit1,HIGH);
    digitalWrite(instructionBit2,HIGH);
    delay(1000*1.25);

    digitalWrite(byte1bit0,LOW);
    digitalWrite(byte1bit1,HIGH);
    digitalWrite(byte1bit2,LOW);
    
    digitalWrite(byte2bit0,HIGH);
    digitalWrite(byte2bit1,LOW);
    digitalWrite(byte2bit2,HIGH);
 
    digitalWrite(instructionBit0,LOW);
    digitalWrite(instructionBit1,LOW);
    digitalWrite(instructionBit2,LOW);
    delay(1000*1);
    
    digitalWrite(instructionBit0,HIGH);
    digitalWrite(instructionBit1,LOW);
    digitalWrite(instructionBit2,LOW);
    delay(1000*1);
    
    digitalWrite(instructionBit0,LOW);
    digitalWrite(instructionBit1,HIGH);
    digitalWrite(instructionBit2,LOW);
    delay(1000*1);
    
    digitalWrite(instructionBit0,HIGH);
    digitalWrite(instructionBit1,HIGH);
    digitalWrite(instructionBit2,LOW);
    delay(1000*1);
    
    digitalWrite(instructionBit0,LOW);
    digitalWrite(instructionBit1,LOW);
    digitalWrite(instructionBit2,HIGH);
    delay(1000*1);
           
    digitalWrite(instructionBit0,HIGH);
    digitalWrite(instructionBit1,LOW);
    digitalWrite(instructionBit2,HIGH);
    delay(1000*1);
    
    digitalWrite(instructionBit0,LOW);
    digitalWrite(instructionBit1,HIGH);
    digitalWrite(instructionBit2,HIGH);
    delay(1000*1);
        
    digitalWrite(instructionBit0,HIGH);
    digitalWrite(instructionBit1,HIGH);
    digitalWrite(instructionBit2,HIGH);
    delay(1000*1);
 
}
