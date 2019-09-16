#include "robot-config.h" //boilerplate
          
/*
    Sets both motors to rotate for 1 second, the time functions are not blocking (the code will not wait for the rotation to finish)
*/
int main() {
    M1.rotateFor(1,timeUnits::sec);
    M2.rotateFor(1,timeUnits::sec);
}
