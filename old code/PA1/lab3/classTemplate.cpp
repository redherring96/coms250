#include <iostream>
#include <string>

using namespace std;

template<class T>
class Max{
	private: 
	T val1, val2;
	public:
		Max(T input1, T input2){
			val1 = input1;
			val2 = input2;
			
			cout <<MaxVal(val1, val2) << endl;
		}
		T MaxVal(T x, T y){
			
			if(x >= y){
				return x;
			}else{
				return y;
			}
		}
};


int main(){
	Max<double> dc(12, 24);
	Max<string> sd("Mark", "Mary");
	

	
}
