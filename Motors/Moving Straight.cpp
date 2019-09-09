//This program is for making the robot move straight with a two motor 
using namespace vex;//Reference the vex class

//Create the motor objects for the left and right motors
motor mtrLeft = motor(PORT1, false); //Set the left motor on port 1 with its direction not reversed
motor mtrRight = motor(PORT2, true); //Set the right motor on port 2 with its direction reversed

int main(){
    //Make the robot drive straight for 1 second (1000 milliseconds)
    mtrLeft.spin(directionType::fwd, 100, percentUnits::pct);
    mtrRight.spin(directionType::fwd, 100, percentUnits::pct);//Set each motor to 100% power forwards
    task::sleep(1000);//Pause for 1 second (1000 milliseconds)
    mtrLeft.stop();
    mtrRight.stop();//Stop both motors (They are still spinning after task::sleep(1000);)
}
