// C++ code
//
int numero = 0;

int e1 = 0;

int e2 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
  pinMode(10, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

  numero = 0;
  Serial.println("Comenzando Programa, numero inicial: ");
  Serial.println(numero);
}

void loop()
{
  if (digitalRead(13) == 1) {
    numero = 0;
    e1 += 1;
    digitalWrite(12, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(12, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    numero = random(1, 9 + 1);
    Serial.println(numero);
    Serial.println("gana equipo 1:");
    Serial.println(e1);
  }
  if (digitalRead(11) == 1) {
    numero = 0;
    e2 += 1;
    digitalWrite(12, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(12, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    numero = random(1, 9 + 1);
    Serial.println(numero);
    Serial.println("gana equipo 2:");
    Serial.println(e2);
  }

  if (numero == 1) {
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(10, LOW);
  }
  if (numero == 2) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  if (numero == 3) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  if (numero == 4) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  if (numero == 5) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  if (numero == 6) {
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(6, LOW);
  }
  if (numero == 7) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
  if (numero == 8) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  if (numero == 9) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}