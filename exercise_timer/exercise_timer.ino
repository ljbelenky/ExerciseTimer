struct LED_struct {
  int pin;
  int duration;
};

struct LED_struct LED[] = {{12, 8000},{11,20000}};
int Power = 8;

void setup(){
  Serial.begin(115200);
  pinMode(Power, OUTPUT);
  digitalWrite(Power, HIGH);
  Serial.println("Power on");

  pinMode(LED[0].pin, OUTPUT);
  pinMode(LED[1].pin, OUTPUT);

int i = 12;
while (i) {
  digitalWrite(LED[i%2].pin, HIGH);
  delay(LED[i%2].duration);
  digitalWrite(LED[i%2].pin, LOW);
  i--;
}
 
 
}

void loop() {
  digitalWrite(Power, LOW);   // Power Down
}

