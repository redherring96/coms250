#include <string>

#include <iostream>

using namespace std;

 

template <class T>

T minimum(T arr[ ], int size){


{
	T smallest = arr [0];
	for (int i = 1; i < size; i++ ){
		if( arr[i] < smallest){
			smallest = arr[i];
		}
	}
	return smallest;
}
//here you will be testing which number is the smallest from your array

// you will set the first slot as smallest and compare

// you will be returing the smllest value to main.

}

int main ()

{

//Create array inilization list of numbers whichever many number you like
double arrl[] = {1.2, 3.4, 5};
int arr2[] = {4,2,6,1};
string arr3[] { "world", "hello" ,"im","Im", "rick", "james"};
cout << "The minimum number is " << minimum( arrl, 3) << endl;

//Create array inilization list of string whichever many number you like

cout << "The minimum string is " << minimum( arr3, 6 )<< endl;

system("pause");

return 0;

}
