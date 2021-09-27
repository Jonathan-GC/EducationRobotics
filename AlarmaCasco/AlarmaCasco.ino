#define debug 0

short sensorPostura=0;
short sensorIman=0;
short sensorBateria=0;
short tonePin = 3;

boolean CascoPuesto = false, CascoAbrochado = false;

void setup() {
  Serial.begin(9600);
  pinMode(4,INPUT_PULLUP);
  cancionFinal();
  delay(5000);


  


}

void loop() {
  sensorIman = digitalRead(4);
  sensorPostura = analogRead(A0);

  !sensorIman?CascoAbrochado=1:CascoAbrochado=0;
  sensorPostura>600?CascoPuesto=1:CascoPuesto=0;

  if(!sensorIman)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
    
  if (CascoPuesto && !CascoAbrochado)
    cancionInicio();

  #if debug
    Serial.print("Iman:\t");Serial.println(sensorIman);
    Serial.print("Sensor de postura:\t");Serial.println(sensorPostura);
  #endif
  delay(100);    

}

void cancionInicio(){
    tone(tonePin, 261, 601.840073437);
    delay(668.711192708);
    delay(0.930057291667);
    tone(tonePin, 195, 601.840073437);
    delay(668.711192708);
    delay(0.930057291667);
    tone(tonePin, 261, 400.947698437);
    delay(445.497442708);
    delay(0.930057291667);
    tone(tonePin, 174, 601.840073437);
    delay(668.711192708);
    delay(0.930057291667);
    tone(tonePin, 220, 601.840073437);
    delay(668.711192708);
    delay(0.930057291667);
    tone(tonePin, 261, 400.947698437);
    delay(445.497442708);
    delay(0.930057291667);
    tone(tonePin, 246, 601.840073437);
    delay(668.711192708);
    delay(0.930057291667);
    tone(tonePin, 246, 400.947698437);
    delay(445.497442708);
    delay(0.930057291667);
    tone(tonePin, 220, 200.055323437);
    delay(222.283692708);
    delay(0.930057291667);
    tone(tonePin, 246, 400.947698437);
    delay(445.497442708);
    delay(0.930057291667);
    tone(tonePin, 261, 1606.30194844);
    delay(1784.77994271);
    delay(0.930057291667);

}

void cancionFinal(){
   tone(tonePin, 349, 306.8184375);
    delay(340.909375);
    tone(tonePin, 440, 102.2728125);
    delay(113.636458333);
    tone(tonePin, 349, 102.2728125);
    delay(113.636458333);
    tone(tonePin, 440, 102.2728125);
    delay(113.636458333);
    tone(tonePin, 466, 306.8184375);
    delay(340.909375);
    tone(tonePin, 587, 102.2728125);
    delay(113.636458333);
    tone(tonePin, 466, 102.2728125);
    delay(113.636458333);
    tone(tonePin, 587, 102.2728125);
    delay(113.636458333);
    tone(tonePin, 698, 409.09125);
    delay(454.545833333);
    tone(tonePin, 698, 306.8184375);
    delay(340.909375);
    tone(tonePin, 698, 102.2728125);
    delay(113.636458333);
}
