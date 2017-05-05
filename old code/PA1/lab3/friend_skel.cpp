//Friends of Classes

#include <iostream>

 

using namespace std;

 

class Box {

double width;

public:
friend void printWidth(Box &bx);
// make the printwidth as a friend function of box class

void setWidth( double wid );

};

// Member function definition

void Box::setWidth( double wid ) {

width = wid;

}

// Note: printWidth() is not a member function of any class.

void printWidth( Box &bx ) {
	cout << bx.width << endl;
/* Because printWidth() is a friend of Box, it can

directly access any member of this class */

 

}

 

// Main function for the program

int main( ) {

Box box;
box.setWidth(10);
printWidth(box);
 

// set box width with member function

 

 

// Use friend function to print the wdith.

 

system("pause");

return 0;

}
