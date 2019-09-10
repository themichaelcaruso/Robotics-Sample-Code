using namespace vex;
brain Brain;
motor mtrLeft = motor(PORT1, false);
motor mtrRight = motor(PORT2, true);
controller ctr = controller(controllerType::primary);
int main() {
    while (true){
        int y = ctr.Axis3.position(percentUnits::pct);
        int x = ctr.Axis4.position(percentUnits::pct);
        mtrLeft.spin(directionType::fwd, y+x, percentUnits::pct);
        mtrRight.spin(directionType::fwd, y-x, percentUnits::pct);

        task::sleep(10);
    }
}
