long dis;
long tiem;
int led = 8;

void setup() {
    Serial.begin(9600);
    pinMode(6,OUTPUT);
    pinMode(7, INPUT);
    pinMode(8, OUTPUT);

}
void loop() {
    digitalWrite(6,LOW);
    delayMicroseconds(5);
    digitalWrite(6,HIGH);
    delayMicroseconds(10);
    tiem=pulseIn(7, HIGH);
    dis=long(0.017*tiem);
    if(dis<20) {
        digitalWrite(8,LOW);
    }
    else{
        digitalWrite(8,HIGH);
    }
}