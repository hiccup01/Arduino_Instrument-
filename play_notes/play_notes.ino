int incomingNum = 0;   // for incoming serial data

void setup() {
        Serial.begin(19200); // opens serial port, sets data rate to 9600 bps 
        int tonePin = 9;
        
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingNum = Serial.read();
                 char incomingChar = atoi(incomingNum);
                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingChar);
                
        }
}
