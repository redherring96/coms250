#ifndef INTRANGE_H
#define INTRANGE_H

#include <iostream>
using namespace std;
class IntRange
{
private:
int input;
int lower;
int upper;
public:
class lowRange
{ public:
	int value;
	lowRange(int v){
		value = v;
	}
}; 
class highRange
{ public:
	int value;
	highRange(int v){
		value = v;
	}
};

IntRange(int low, int high)
{
lower = low;
upper = high;
}
int getinput()
	{
	cin >> input;
	if (input < lower){ //|| input > upper)
	throw lowRange(input);
	
	}else if(input > upper) {
		throw highRange(input);
		
	}else{
		return input;
	}
}
};
#endif 
