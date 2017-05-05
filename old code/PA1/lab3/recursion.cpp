#include <iostream>
#include <string>
using namespace std;

int recursiveSearch(char searchChar, string searchString, int startingIndex ){
	
	if(startingIndex == (searchString.length())){
		return 0;
	}
	else if(searchChar == searchString[startingIndex]){
		return 1 + recursiveSearch(searchChar, searchString, (startingIndex + 1));
	}
	else{
		return recursiveSearch(searchChar, searchString, (startingIndex + 1));
	}
	
	
	
}

int factorial(int factorialStart){
	if (factorialStart == 0){
		return 1;
	}
	else if(factorialStart < 0){
		cout << "Error: Factorial Start is less than 0" << endl;
		return 0;
	}
	else{
		return factorialStart * factorial((factorialStart -1));
	}
	
}

int GCD(int firstnum, int secondnum){
	if(firstnum < secondnum){
		int temp = firstnum;
		firstnum = secondnum;
		secondnum = firstnum;
	}
	else if ((firstnum%secondnum) == 0){
		return secondnum;
	}
	else{
		return GCD(secondnum, (firstnum % secondnum));
	}
	
}

int main(){
	string inputString;
	char search = 'a';
	int index = 0;
	int inputfactorial;
	int number1,number2;
	/**cout << "Please input string to search" << endl;
	cin >> inputString;
	cout << "Please input search character" << endl;
	cin >> search;
	cout << "Please input starting index" << endl;
	cin >> index;
	cout << recursiveSearch(search, inputString, index) << endl;
	
	**/
	
	
	/**cout << "Please input your factorial" << endl;
	cin >> inputfactorial;
	cout << factorial(inputfactorial) << endl;
	**/
	
	cout << "please enter first number to calculate GCD" << endl;
	cin >> number1;
	cout << "please enter second number to calculate GCD" << endl;
	cin >> number2;
	cout << GCD(number1, number2) << endl;
	
	return 0;
}
