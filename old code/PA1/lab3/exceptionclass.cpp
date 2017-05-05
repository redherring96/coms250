// This program demonstrates the use of object-oriented
#include <iostream>
#include "IntRange.h"
using namespace std;
int main()
{
IntRange range(5, 10);
int userValue;

cout << "Enter a value in the range 5 - 10: ";
try
{
userValue = range.getinput();
cout << "You entered " << userValue << endl;
}
catch (IntRange::highRange em)
{
cout << "That value "<< em.value <<" is too high. \n ";
}
catch (IntRange::lowRange em)
{
	cout << "That value "<< em.value << " is too low. \n";
}
cout << "End of the program. \n ";
return 0;
} 
