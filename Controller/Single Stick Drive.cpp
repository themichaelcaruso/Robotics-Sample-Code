//This program is for a single stick driven robot
using namespace vex;
brain Brain;
motor mtrLeft = motor(PORT1, false);//Create the motors
motor mtrRight = motor(PORT2, true);
controller ctr = controller(controllerType::primary);//Create the controller
int main() {
    while (true){
        int y = ctr.Axis3.position(percentUnits::pct);//Get the position of the controller for forward and back
        int x = ctr.Axis4.position(percentUnits::pct);//Get the position of the controller for Right and Left
        mtrLeft.spin(directionType::fwd, y+x, percentUnits::pct);
        mtrRight.spin(directionType::fwd, y-x, percentUnits::pct);

        task::sleep(10);
    }
}
