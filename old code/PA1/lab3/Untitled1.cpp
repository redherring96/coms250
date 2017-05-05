#include <iostream>
#include <cassert>
using namespace std;

double medianValue(double *arrayPtr, int n){
// precondition: array is sorted;
    for (int i = 0; i < (n - 1); i++){ //iterates through array
        assert(*(arrayPtr + i) < *(arrayPtr + (i+1))); // checks that array is sorted. if array is not sorted, then assertion fails, crashing the program
    }
    double sum = 0;
    if( n % 2 == 0){
        sum = *(arrayPtr + (n/2)) + *(arrayPtr + ((n/2) -1));
        return sum / 2;
    }
    else{return *(arrayPtr + ((n-1)/2));}
}

int main() {

    double testArray[] = {1,27,38,97,100};
    double testArray2[] = {1,27,38,46,55,67};
    double testArray3[] = {1,2,4,3,5,6};
    double *doublePtr;

    doublePtr = testArray;
    cout << medianValue(doublePtr, 5) << endl;
    doublePtr = testArray2;
    cout << medianValue(doublePtr, 6) << endl;
    doublePtr = testArray3;
    cout << medianValue(doublePtr, 6) << endl;

    return 0;
}
