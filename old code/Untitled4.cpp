#include <iostream>
using namespace std;

int main()
{
	int count = 5; 
	int *ptr = &count;
	double *dPtr;
	double dub = 12.0;
	dPtr = &dub;
	cout << *dPtr << endl;
	cout << dPtr;
	return 0;
}
