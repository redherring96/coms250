#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int square_root(int square){
	int temp = pow(square, 0.5);
	if(temp*temp != square){
		string ex = "bad argument, not a perfect square";
		throw ex;
		return -1;
	}else{
		return temp;
	}
}

template<class T>
T minTemp(T min1, T min2){
	if(min1 < min2){
		return min1;
	}else{
		return min2;
	}
}

template<class T>
T maxTemp(T max1, T max2){
	if(max1 > max2){
		return max1;
	}else{
		return max2;
	}
}






// driver program for square_root
/**int main(){

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

}**/

//driver program for min/max

int main(){
	int testArr[]={5,6,7,8};
	int testArr2[] = {1,2,3,4};
	cout << "min/max of int:"<< endl;
	for(int i = 0; i < 4; i++){
		cout << "min of " << testArr[i] << " & " << testArr2[i] << " is: "<< minTemp<int>(testArr[i], testArr2[i]) << endl;
	}
	cout << endl;
		for(int i = 0; i < 4; i++){
		cout << "max of " << testArr[i] << " & " << testArr2[i] << " is: "<< maxTemp<int>(testArr[i], testArr2[i]) << endl;
	}
	
	double test1[] = {1.2, 3.14, 5.87, 7.89};
	double test2[] = {67.8,3.0,5.55,1.23};
	cout << endl;
	cout << "min/max of doubles:" << endl;
	for(int i = 0; i < 4; i++){
		cout << "min of " << test1[i] << " & " << test2[i] << " is: "<< minTemp<double>(test1[i], test2[i]) << endl;
	}
	cout << endl;
		for(int i = 0; i < 4; i++){
		cout << "max of " << test1[i] << " & " << test2[i] << " is: "<< maxTemp<double>(test1[i], test2[i]) << endl;
	}
	return 0;
}




