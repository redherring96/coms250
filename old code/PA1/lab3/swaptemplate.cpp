#include <iostream>

template<class T>
void swap(T &x, T &y){
	T temp = x;
	x = y;
	y = temp;
}


int main(){
	int one, two;
	one = 1;
	two = 2;
	std::cout << "swap function: \n";
	std::cout << "one: " << one << " two: " << two << std::endl;
	std::cout << "swapping 1 & 2\n";
	swap(one, two);
	std::cout << "one: " << one << " two: " << two << std::endl;
	return 0;
	
	
	
	
}
