#include <iostream>
using namespace std;


int size = 6;
int *sizeptrG = &size;
int array[6] = {1,1,2,3,3,3};
int *arrayPtr = array;

int mode(int *marrayptr,int* sizeptr)
{
	int mode,count,highcount=0,cnum,hnum = 6;
	cnum = *marrayptr;

	//for (int c=0;c<*sizeptr;c++)
//	{
	//	cout << "mode function: the c for loop iteration is:" << c << endl;
		for (int i=0;i<=*sizeptr;i++)
		{
			cout << "mode function: the i for loop iteration is:" << i << endl;
			if (*(marrayptr+i)==cnum){
				count++;
				cout << "mode function: the count is:" << count << endl;
			}else if (count>highcount)
			{
			highcount=count;
			hnum=cnum;
			cnum = *(marrayptr + i);
			count = 1;
			}
			
		}
//	}
		return hnum;
}

int main(){
	
	cout << "the correct mode is 3:" << endl;
	cout << "the function outputs:"<< mode(arrayPtr, sizeptrG);
	
}
