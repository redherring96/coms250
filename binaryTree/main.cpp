#include<iostream>
#include"binaryKZ.h"
using namespace std;
int main()
{
	cout<<"hi"<<endl;
	// create object and call insert and search functions from here
  binaryKZ tree(50);
	tree.insert(30);
	if(tree.Bsearch(20)){
		cout << "true" << endl;
	}else{
		cout << "false" << endl;
	}
	system("pause");
	return 0;
}
