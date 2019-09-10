
using namespace vex;
brain Brain;
motor mtrLeft = motor(PORT1, false);
motor mtrRight = motor(PORT2, true);
controller ctr = controller(controllerType::primary);
int main() {
    while (true){
        int l = ctr.Axis3.position(percentUnits::pct)/2;
        int r = ctr.Axis4.position(percentUnits::pct)/2;
        mtrLeft.spin(directionType::fwd, l+r, percentUnits::pct);
        mtrRight.spin(directionType::fwd, l-r, percentUnits::pct);
        
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("%f, %f", mtrLeft.rotation(rotationUnits::deg), mtrRight.rotation(rotationUnits::deg));
        task::sleep(25);
    }
}
