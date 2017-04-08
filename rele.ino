/*  25. rész - A relé modul
 * 
 * Egy relé ki-be kapcsol másodpercenként.
 * 
 * Készítette: Kotán Tamás Balázs - Magyar Arduino Labor
 * Győr, 2017.03.22.
 */

int rele = 5;

void setup() {
  
  Serial.begin(9600);
  pinMode(rele, OUTPUT);

  digitalWrite(rele, LOW);
}

void loop() {

  digitalWrite(rele, HIGH);
  Serial.println("NYITVA");
  delay(1000);
  digitalWrite(rele, LOW);
  Serial.println("ZARVA");
  delay(1000);

}
