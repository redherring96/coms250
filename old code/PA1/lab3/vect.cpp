#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector<int> myvector;



vector<int>::iterator x;
vector<int>::iterator y;


 int main(){
 	y = myvector.end();
	y--;
 	for(int k = 1; k <=6; k++){
	myvector.push_back(k*k);
	}	

 	x = myvector.begin();
 	
 	random_shuffle(myvector.begin(), myvector.end(),y);
 	while (x != myvector.end()){
	
 	cout << *x<< endl;
 	x++;
 }
 	
	 return 0;
 }
