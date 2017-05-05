#include <iostream>

using namespace std;

class SMV{
	
	private: static int x; 
	int y;
	/**friend int setY(int a, SMV &c){
		c.y = a;
	}**/
	
	friend int getY(SMV &c){
		return c.y;
	}
	public: static void setX( int a){
		x=a;
	}
	
	static int getX(){
		
		return x;
	}
};
friend
int SMV::x;

int main(){
	SMV o2;
	o2.setY(55);
	cout << o2.getY();
	SMV o1;

	SMV::setX(6);
	//SMV o1, o2;
	cout << SMV::getX() << endl;
//	cout << o2.getX() << endl;
	
	
	/**SMV *ptr;
	ptr = new SMV;
	for (int i = 1; i < 4; i++){
	cout << "iteration :" << i << endl;
	o1.setX(i * 7);
	cout << "object 2:" << o2.getX() << endl;
	o2.setX(i * 3);
	cout << "object 1:" << o1.getX() << endl;
	 SMV o3;
	 cout << "object 3:" << o3.getX() << endl;
	 
	 cout << "object 4:" << ptr -> getX() << endl;
	 ptr -> setX(66/ i);
	 cout << "object 1 :" << o1.getX() << endl;**/
	 
	

system("pause");
}
