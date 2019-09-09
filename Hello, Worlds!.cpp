//Vex Coding Studio is programmed in C++ and has three options for coding: Block style, C++, and C++ Pro.
//These sample programs will be used in the C++ Pro Mode
//C++ is very similar to Java in that it uses the same syntax. 
//Before learning to program the robots, check out this website for information about coding in C++: 
//https://www.tutorialspoint.com/cplusplus/index.htm#
//Here is the link to the VEX API documentation:
//http://help.vexcodingstudio.com/#pro


//This is the structure of a C++ Program
//All global variables, objects, and functions are defined here
using namespace vex;//This says to reference the vex class
brain robot = brain();//This defines an object for the main robot brain called robot

int main(){
    //This is the main function, this is where the program begins to be executed by the compiler
    robot.Screen.print("Hello, Worlds!");//Print to the robot's screen
    return 0;//End the main program
}
