//This program is for using the yaw rate gyroscope
//A gyroscope is used to measure how far the robot has turned.
using namespace vex;
brain Brain;
gyro gyroC = gyro(Brain.ThreeWirePort.A);//Create the gyro object on three wire port A
int main() {
    gyroC.startCalibration();//Start the gyro's calibration
    while (gyroC.isCalibrating()){//Wait for the gyro to finish
        task::sleep(25);
    }
    while (true){
        //Print the gyro's value to the brain screen
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("%d", gyroC.value(analogUnits::range12bit));//Use analogUnits::range12bit instead of rotationUnits::deg, because it is glitched
        //The gyro's angle will be printed as tenths of degrees, not degrees
        task::sleep(10);
    }
}
