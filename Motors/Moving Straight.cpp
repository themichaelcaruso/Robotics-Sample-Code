#include "robot-config.h" //boilerplate
          
/*
    Sets both motors to rotate for 1 second
*/
int main() {
    M1.startRotateFor(1,timeUnits::sec);
    M2.rotateFor(1,timeUnits::sec);
}
