//constants
const int photoResistor = A0;

// variables 
int value; // store value from photoresistor (0-1023)

void setup() {
    Serial.begin(9600);
    pinMode(photoResistor, INPUT);
    //display.display();
}

void loop() {
    value = analogRead(photoResistor);
    Serial.print("photoresistor value ");
    Serial.println(value);

}