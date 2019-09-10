//This program is for making the robot do a point turn with a two motor drive
using namespace vex;//Reference the vex class

//Create the motor objects for the left and right motors
motor mtrLeft = motor(PORT1, false); //Set the left motor on port 1 with its direction not reversed
motor mtrRight = motor(PORT2, true); //Set the right motor on port 2 with its direction reversed

int main(){
    //To make the robot, you have to set the two motors to different speeds
    //In a point turn, one side of the chassis moves forward while the other moves backward
    //Right Point Turn:
    mtrLeft.spin(directionType::fwd, 100, percentUnits::pct);//Set the left motor to 100% power forwards
    mtrRight.spin(directionType::fwd, -100, percentUnits::pct);//Set the right motor to -100% power
    //Even though the directionType is forward, the negative makes the motor spin backwards
    task::sleep(1000);//Pause for 1 second (1000 milliseconds)
    mtrLeft.stop();
    mtrRight.stop();//Stop both motors (They are still spinning after task::sleep(1000);)
    //Change which motor moves to do a left point turn
}
