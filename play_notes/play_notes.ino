int incomingByte = 0;   // for incoming serial data

void setup() {
        Serial.begin(9600); // opens serial port, sets data rate to 9600 bps 
        int tonePin = 9;
        
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();
                incomingByte - 96;
                incomingByte * 50000;
                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte);
                
        }
}