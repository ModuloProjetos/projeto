// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  varl = digitalRead(botao1);
  varl = digitalRead(botao2);
  
  if(varl){
    digitalWrite(led, HIGH);
  }
  if(varl){
    digitalwrite(led, LOW);
    {
}