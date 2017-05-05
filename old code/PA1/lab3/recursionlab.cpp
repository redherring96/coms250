#include <iostream>
#include <math.h>
using namespace std;

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

int LCM(int firstnum, int secondnum){
	return (firstnum * secondnum)/GCD(firstnum, secondnum);
	
}




int binarySearch(int listData[], int value, int length, int low =-1, int high = -1){
	if(low == -1 && high == -1){
		cout << "low and high set to initial values" << endl;
		low = 0;
		
		high = length - 1;
	
	}
	
	if (low == high && listData[low] == value){
		return low;
	}else{
		int mid = floor((high + low) / 2);
		cout <<"mid:"<< mid<< endl;
		cout <<"low"<< low<<endl;
		cout <<"high:"<< high<< endl;
		if (listData[mid] == value){
			return mid;
		}else if (listData[mid]<value){
			low = mid+1;
			return binarySearch(listData, value, length, low, high);
		}else{
			high = mid - 1;
			return binarySearch(listData, value, length, low, high);
		}
			
	}
}
	
	


int main(){
/**	int first, second;
	first = 100;
	second = 20;
	cout << "GCD = " << GCD(first, second) << endl;
	cout << "LCM = " << LCM(first, second) << endl;
	**/
	int leng = 6;
	int searchArray[] = {1,2,3,4,5,6};
	int index = binarySearch(searchArray, 4, leng);
	cout << "the element 4 in the array is located at " <<index << endl;
	
	cout << "searchArray["<< index << "] : " << searchArray[index] << endl;
	
}
