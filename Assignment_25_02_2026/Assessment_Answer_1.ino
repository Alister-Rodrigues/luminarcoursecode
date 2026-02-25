const int red_1 = 15;
const int yellow_1 = 2;
const int green_1 = 4;

const int red_2 = 5;
const int yellow_2 = 18;
const int green_2 = 19;

const int red_3 = 13;
const int yellow_3 = 12;
const int green_3 = 14;

const int red_4 = 27;
const int yellow_4 = 26;
const int green_4 = 25;

void setup() {
  // put your setup code here, to run once:
  pinMode(red_1, OUTPUT);
  pinMode(yellow_1, OUTPUT);
  pinMode(green_1, OUTPUT);

  pinMode(red_2, OUTPUT);
  pinMode(yellow_2, OUTPUT);
  pinMode(green_2, OUTPUT);
  
  pinMode(red_3, OUTPUT);
  pinMode(yellow_3, OUTPUT);
  pinMode(green_3, OUTPUT);
  
  pinMode(red_4, OUTPUT);
  pinMode(yellow_4, OUTPUT);
  pinMode(green_4, OUTPUT);

  digitalWrite(red_1, LOW);
  digitalWrite(yellow_1, LOW);
  digitalWrite(green_1, HIGH);

  digitalWrite(red_2, HIGH);
  digitalWrite(yellow_2, LOW);
  digitalWrite(green_2, LOW);

  digitalWrite(red_3, HIGH);
  digitalWrite(yellow_3, LOW);
  digitalWrite(green_3, LOW);

  digitalWrite(red_4, HIGH);
  digitalWrite(yellow_4, LOW);
  digitalWrite(green_4, LOW);
}

void toggleNext(int prev_red, int prev_yellow, int prev_green, int next_red, int next_yellow, int next_green) {
  digitalWrite(prev_green, LOW);
  digitalWrite(next_red, LOW);
  digitalWrite(prev_yellow, HIGH);
  digitalWrite(next_yellow, HIGH);
  delay(2000);

  digitalWrite(prev_yellow, LOW);
  digitalWrite(next_yellow, LOW);
  digitalWrite(prev_red, HIGH);
  digitalWrite(next_green, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(60000);
  toggleNext(red_1, yellow_1, green_1, red_2, yellow_2, green_2);
  delay(60000);
  toggleNext(red_2, yellow_2, green_2, red_3, yellow_3, green_3);
  delay(60000);
  toggleNext(red_3, yellow_3, green_3, red_4, yellow_4, green_4);
  delay(60000);
  toggleNext(red_4, yellow_4, green_4, red_1, yellow_1, green_1);
}
