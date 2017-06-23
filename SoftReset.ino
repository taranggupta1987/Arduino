
unsigned long StartTime;


void setup() {
  Serial.println("Starting Again!");
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  StartTime = millis();
  //Serial.println(CurrentTime);
}


void loop() {

 unsigned long CurrentTime = millis();
 //Serial.println(CurrentTime);
 delay(1000);
 unsigned long ElapsedTime = (CurrentTime - StartTime);
 Serial.println(ElapsedTime);
  
  if(ElapsedTime > 60000)
  {
    Serial.println("inloop");
  software_Reset() ;
  }

  
}

void software_Reset() // Restarts program from beginning but does not reset the peripherals and registers
{
asm volatile ("  jmp 0");  
} 

