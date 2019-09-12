//This program is for using ditigal sensors
//Digital sensors return a state of only 0 or 1

using namespace vex;
brain Brain;
bumper bumpFoo = bumper(Brain.ThreeWirePort.B);//Create a bumper object on three wire port A
limit limitFoo = limit(Brain.ThreeWirePort.C);//Create a limit switch object on three wire port B
digital_in digitalFoo = digital_in(Brain.ThreeWirePort.D);//Create a generic digital input on three wire port C

int main() {
    while (true){
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1,1);
        Brain.Screen.print("%d", bumpFoo.pressing()?1:0);//Print whether the bumper switch is pressed
        Brain.Screen.newLine();
        Brain.Screen.print("%d", limitFoo.pressing()?1:0);//Print whether the limit switch is pressed
        Brain.Screen.newLine();
        Brain.Screen.print("%d", digitalFoo.value());//Print whether the digital input is 0 or 1
        task::sleep(10);
    }
}
