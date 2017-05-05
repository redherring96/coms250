#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

template <class T>
class Rectangle
{

private:
T width;
T length;
T area;
public:
Rectangle(T w, T l);
//{
//	width = w;
//	length = l
//	calcArea();
//}
Rectangle();

void setArea(T,T);

void calcArea();
//{ area = width * length; }
T getWidth();
//{ return width; }
T getLength();
//{ return length; }
T getArea();
//{ return area; }

};

template <class T> void Rectangle<T>::calcArea(){
	area = width * length;
}

template <class T> Rectangle<T>::Rectangle(T w, T l){
	width = w;
	length = l;
	calcArea();
}
template <class T> Rectangle<T>::Rectangle(){
	width = 0;
	length = 0;
	area = 0;
}

template <class T> T Rectangle<T>::getArea(){
	return area;
}

template <class T> T Rectangle<T>::getLength(){
	return length;
}

template <class T> T Rectangle<T>::getWidth(){
	return width;
}
template <class T> void Rectangle<T>::setArea(T w, T l){
	width = w;
	length = l;
}



int main(){
	Rectangle<int> intRect(12, 5);
	
	cout << "Area of int Rectangle is : " <<intRect.getArea() << endl;
	cout << "length of int Rectangle is : " << intRect.getLength() << endl;
	cout << "width of int Rectangle is : " << intRect.getWidth() << endl;
	
	Rectangle<double> doubRect(12.0, 5.0);
	
	cout << "Area of double rectangle is : " << doubRect.getArea() << endl;
	cout << "Length of double rectangel is : " << doubRect.getLength()<< endl;
	cout << "width of double rectangel is : " << doubRect.getWidth() << endl;
	
	
for(int i = 0; i <= 40; i++){
	cout << '*';
}
cout << endl;
vector<int>::iterator it;
vector<int> labVector;


for (int i = 0; i < 10; i++){
	int random = rand() % 9;
	labVector.push_back(random);
}

bool exit = false;

while (!exit){
	int random = rand() % 9;
	it = find(labVector.begin(), labVector.end(), random);
	if(it != labVector.end()){
		exit = true;
	}
	else{
		labVector.swap()
	}
	
}

cout << "labVector contains the element " << *it << endl;

	return 0;
	
}
