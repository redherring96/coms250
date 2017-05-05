#include <list>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class DynamicStack{
	private:
		list<int> *Stack;
		list<int>::iterator iter;
		int stackSize;
		void updateSize();
	public:
		DynamicStack();
		~DynamicStack();
		void push(int);
		void pop(int&);
		int sizeOf();
};

DynamicStack::DynamicStack(){
	Stack = new list<int>;
	stackSize = 0;

}

void DynamicStack::push(int val){

	Stack ->push_back(val);
	updateSize();
//iter = Stack -> end(); i dont think i need an iterator. saving just in case;
}

void DynamicStack::pop(int &val){
	if(!(Stack -> empty())){
		val = Stack -> back();
		Stack ->pop_back();
		updateSize();
	}else{
		cout << "Cannot pop, list is empty" << endl;
		exit(1);
	}
	
}

int DynamicStack::sizeOf(){
	return stackSize;
}

void DynamicStack::updateSize(){
	stackSize = Stack -> size();
}
DynamicStack::~DynamicStack(){
	delete Stack;
}
int convertInput(string input){
	int temp;
	temp = atoi(input.c_str());
	return temp;
	
}

int main(){
	DynamicStack progStack;
	for(int i =1; i < 6; i++){
		cout << "Pushing i: " << i << endl;
		progStack.push(i);
	}
	int catchVar;
	cout << "Now the size of the list is : " << progStack.sizeOf() << endl;
	for(int i = 0; i < 5; i++){
		progStack.pop(catchVar);
		cout <<"Popping : " << catchVar << endl;
	}
	
	
	return 0;
}
