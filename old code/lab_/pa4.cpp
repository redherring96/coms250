#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int square_root(int square){
	int temp = pow(square, 0.5);
	if(temp*temp != square){
		throw "Argument was not a perfect square";
		return -1;
	}else{
		return temp;
	}
}
int main(){

try{


	int testArr[] = {1,4,8,9,25,27,36,41,49};
	int temp;
	for(int i = 0; i < 9; i++){
		temp = square_root(testArr[i]);
		if(temp > 0){
			cout << testArr[i] << " " << temp << endl;
		}
	}
	
	
	return 0;
}
catch(string exception_string){
	cout << exception_string << endl;

}
}
