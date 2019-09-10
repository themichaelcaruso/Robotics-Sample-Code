//This program is for using a controller
using namespace vex;
brain Brain;
motor mtrLeft = motor(PORT1, false);//Define the motor objects
motor mtrRight = motor(PORT2, true);
controller ctr = controller(controllerType::primary);//Define the controller object
int main() {//Main method
    while (true){//Loop continuously to keep updating the motor speeds to match the controller
        int left = ctr.Axis3.position(percentUnits::pct);//Store the controller values in variables
        int right = ctr.Axis2.position(percentUnits::pct);
        mtrLeft.spin(directionType::fwd, left, percentUnits::pct);//Set the motors to the values from the controller
        mtrRight.spin(directionType::fwd, right, percentUnits::pct);
        task::sleep(10);//Small wait time before looping again
    }
}
