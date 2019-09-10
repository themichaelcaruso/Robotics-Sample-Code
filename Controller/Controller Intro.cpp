//This file is an intro to using a controller to control your robot

//To make a controller object:
controller ctr = controller();

//Using Buttons:
ctr.ButtonA.pressing() //This returns true or false for whether Button A is being pressed or not
//Each Button on the controller is labeled

//Using Joysticks:
ctr.Axis1.position(positionUnits::pct) //This returns an integer value for the position of the 1 Axis on the controller from -100 to 100
  
//Using the LCD:
//You can print three lines of text to the controller screen, similar to the brain screen.

ctr.Screen.clearScreen() //This clears the screen
ctr.Screen.clearLine(1) //This clears line 1
ctr.Screen.setCursor(1,0) //This sets the cursor to 1,0 or the top left corner
ctr.Screen.print("Robots will rise") //This prints a message to the screen
