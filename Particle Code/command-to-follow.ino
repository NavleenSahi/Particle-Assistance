// This #include statement was automatically added by the Particle IDE.
#include <InternetButton.h>

InternetButton b = InternetButton();

void setup() {
    b.begin();
    Particle.function("assist", followCommands);
}

void loop() {

}

int followCommands(String command){
    
    // Check that the value it's been given is in the right range
    if(command == "light up rainbow"){
        b.rainbow(5);
        delay(500);
        b.allLedsOff();
    }
    
    if(command == "play music"){
        b.playSong("E5,8,G5,8,E6,8,C6,8,D6,8,G6,8");
    }
    
    if(command == "let's dance"){
        b.ledOn(1, 255, 255, 255);
        b.ledOn(3, 255, 255, 255);
        b.ledOn(5, 255, 255, 255);
        b.ledOn(7, 255, 255, 255);
        b.ledOn(9, 255, 255, 255);
        b.ledOn(11, 255, 255, 255);
        delay(150);
        b.allLedsOff();
        b.ledOn(2, 255, 0, 255);
        b.ledOn(4, 255, 0, 255);
        b.ledOn(6, 255, 0, 255);
        b.ledOn(8, 255, 0, 255);
        b.ledOn(10, 255, 0, 255);
        delay(150);
        b.allLedsOff();
        b.ledOn(1, 255, 255, 0);
        b.ledOn(3, 255, 255, 0);
        b.ledOn(5, 255, 255, 0);
        b.ledOn(7, 255, 255, 0);
        b.ledOn(9, 255, 255, 0);
        b.ledOn(11, 255, 255, 0);
        delay(150);
        b.allLedsOff();
        b.ledOn(2, 0, 255, 255);
        b.ledOn(4, 0, 255, 255);
        b.ledOn(6, 0, 255, 255);
        b.ledOn(8, 0, 255, 255);
        b.ledOn(10, 0, 255, 255);
        delay(150);
        b.allLedsOff();
        b.ledOn(1, 0, 0, 255);
        b.ledOn(3, 0, 0, 255);
        b.ledOn(5, 0, 0, 255);
        b.ledOn(7, 0, 0, 255);
        b.ledOn(9, 0, 0, 255);
        b.ledOn(11, 0, 0, 255);
        delay(150);
        b.allLedsOff();
        b.ledOn(2, 255, 0, 0);
        b.ledOn(4, 255, 0, 0);
        b.ledOn(6, 255, 0, 0);
        b.ledOn(8, 255, 0, 0);
        b.ledOn(10, 255, 0, 0);
        delay(150);
        b.allLedsOff();
    }
    
    // In embedded programming, "return 1" means that 
    // the function finished successfully
    return 1;
}