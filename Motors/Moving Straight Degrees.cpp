//This program is for making the robot move straight with a two motor drive
using namespace vex;//Reference the vex class

//Create the motor objects for the left and right motors
motor mtrLeft = motor(PORT1, false); //Set the left motor on port 1 with its direction not reversed
motor mtrRight = motor(PORT2, true); //Set the right motor on port 2 with its direction reversed

int main(){
    //Make the robot drive straight for 720 degrees (2 rotations)
    mtrLeft.resetRotation();//Reset the motor encoder rotations
    mtrRight.resetRotation();
    mtrLeft.spin(directionType::fwd, 100, percentUnits::pct);
    mtrRight.spin(directionType::fwd, 100, percentUnits::pct);//Set each motor to 100% power forwards
    
    while (mtrLeft.rotation(rotationUnits::deg) < 720){
        task::sleep(25);//Check every 25 milliseconds
    }//wait until the left motor has gone 720 degrees
    mtrLeft.stop();
    mtrRight.stop();//Stop both motors (They are still spinning)
}
