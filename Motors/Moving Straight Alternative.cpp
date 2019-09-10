//This program uses an alternative function to make the motors move a certain more distance
//This function is more accurate than the other methods
using namespace vex;//Reference the vex class

//Create the motor objects for the left and right motors
motor mtrLeft = motor(PORT1, false); //Set the left motor on port 1 with its direction not reversed
motor mtrRight = motor(PORT2, true); //Set the right motor on port 2 with its direction reversed

int main(){
    //Make the robot drive straight for 720 degrees (2 rotations)
    mtrLeft.resetRotation();//Reset the motor encoder rotations
    mtrRight.resetRotation();
    mtrLeft.startRotateTo(720, rotationUnits::deg, 100, percentUnits::pct); //Make the left motor move to 720 degrees
    mtrRight.startRotateTo(720, rotationUnits::deg, 100, percentUnits::pct); //Make the right motor move to 720 degrees
    //The startRotateTo command will move to 720 degrees and then holds position
    //The startRotateTo command can be used to make multiple motors spin to different distances (The left motor goes to one position while the right motor goes to the other)
    while (!mtrLeft.spinning() && !mtrRight.spinning()){
        task::sleep(25);//Check every 25 milliseconds
    }//wait until both motors have stopped
}
