//This program is a sample program for navigating a maze using the startRotateTo() command
using namespace vex;//Reference the vex class
brain Brain;//Define brain and motors
motor mtrLeft = motor(PORT1, false);
motor mtrRight = motor(PORT2, true);
void driveTo(double leftDeg, double rightDeg){//This is a function that takes degrees to move to and moves the motors to those degrees
    mtrLeft.startRotateTo(leftDeg, rotationUnits::deg, 40, velocityUnits::pct);//Start the motors rotating to the inputted values
    mtrRight.startRotateTo(rightDeg, rotationUnits::deg, 40, velocityUnits::pct);
    while (true){//Wait for both motors to stop spinning
        if (!mtrLeft.isSpinning() && !mtrRight.isSpinning()){
            break;
        }
    }
    task::sleep(50);//Wait 50 milliseconds for the motors to stop
}
int main(){//Main method
    mtrLeft.resetRotation();//Reset motor rotations
    mtrRight.resetRotation();
    driveTo(1014, 1014);//Drive to each position
    driveTo(742, 1282);
    driveTo(1277, 1816);
    driveTo(1006, 2075);
    driveTo(2554, 3628);
    driveTo(2826, 3358);
    driveTo(4046, 4574);
    driveTo(4330, 4289);
    driveTo(5789, 5751);
    driveTo(6089, 5453);
    driveTo(6537, 5897);
    driveTo(6791, 5641);
    driveTo(7373, 6238);
}
