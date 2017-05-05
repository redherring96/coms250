#include <iostream>
#include <vector>
#include <stack>
#include <list>
using namespace std;

int main() {
	stack<int,list<int> > iStack;
	for (int i = 0; i < 8; i++){
		cout << "Pushing " << i << endl;
		iStack.push(i);		
	}
	
	cout << "The size of the stack is " << iStack.size() << endl;
	while (!iStack.empty()){
		cout << "Popping " << iStack.top() << endl;
		iStack.pop();
		
	}
	
	return 0;
}
