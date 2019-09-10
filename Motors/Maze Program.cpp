#include "robot-config.h"
using namespace vex;
motor mtrLeft = motor(PORT1, false);
motor mtrRight = motor(PORT2, true);
void driveTo(double leftDeg, double rightDeg){
    mtrLeft.startRotateTo(leftDeg, rotationUnits::deg, 40, velocityUnits::pct);
    mtrRight.startRotateTo(rightDeg, rotationUnits::deg, 40, velocityUnits::pct);
    while (true){
        if (!mtrLeft.isSpinning() && !mtrRight.isSpinning()){
            break;
        }
    }
    task::sleep(50);
}
int main(){
    mtrLeft.resetRotation();
    mtrRight.resetRotation();
    driveTo(1014, 1014);
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
