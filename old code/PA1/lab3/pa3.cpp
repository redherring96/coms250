#include <iostream>
#include <cassert>
using namespace std;

/**double sortArray(double &array, int n){
	int temp;
	for (int i = 0; i < n - 1; i++ ){
	
		for (int j = 0; j < n - 1; j++){
			if (array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}**/

double emptyValue(int array[], int n){
	for(int i = 0; i < n; i++){
		if (!array[i]){
			return i;
		}
	}
}

int modeValue(double *arrayPtr, int n){
	int empty = 0;
	int highValueIndex[n] = {};
	for (int i = 0; i < n; i++){
		highValueIndex[i] = 0;
	}
	int count = 0;
	int tempCount = 0;
	for(int i = 0; i < n; i++){
		if(*(arrayPtr + i) == *(arrayPtr + i + 1)){
			tempCount++;
		}
		else{
			if(tempCount > count){
				count = tempCount;
				highValueIndex[0] = i;
			}
			else if (tempCount == count){
				empty = emptyValue(highValueIndex, n);
				highValueIndex[empty] = i;
					
			}
			else{
				tempCount = 0;
			}
		}
	}
	empty = emptyValue(highValueIndex, n);
	int returnIndex[empty + 1] = {};
	for(int i = 0; i < emptyValue(highValueIndex, n) + 1; i++){
		returnIndex[i] = *(arrayPtr + highValueIndex[i]);
	}
	return *returnIndex;	
	
}

double medianValue(double *arrayPtr, int n){
// precondition: array is sorted;
    for (int i = 0; i < (n - 1); i++){
        assert(*(arrayPtr + i) <= *(arrayPtr + (i+1)));
    }
    double sum = 0;
    if( n % 2 == 0){
        sum = *(arrayPtr + (n/2)) + *(arrayPtr + ((n/2) -1));
        return sum / 2;
    }
    else{return *(arrayPtr + ((n-1)/2));}
}

int main() {

    double testArray[] = {10,10,30,30,30};
    double testArray2[] = {1,2,3,3,3,6};
    //double testArray3[] = {1,2,4,3,5,6};
    double *doublePtr;

    doublePtr = testArray;
    cout << medianValue(doublePtr, 5) << endl;
    cout << modeValue(doublePtr, 5) << endl;
    doublePtr = testArray2;
    cout << medianValue(doublePtr, 6) << endl;
    cout << modeValue(doublePtr, 6) << endl;
    //doublePtr = testArray3;
    //cout << medianValue(doublePtr, 6) << endl;

    return 0;
}
