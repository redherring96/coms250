#include <iostream>

using namespace std;
int median(int marrayArg[] ,int *sizeptr);
int mode(int *marrayptr,int* sizeptr);

int main()
{
	int size=6;
	int choice,count=0;
	int*sizeptr;
	int marray[size];
	*sizeptr=size;
	while (count<size)
	{
		cout<<"Input element "<<count+1<<"'s number\n";
		cin>>marray[count];
		count++;
	}
while (choice!=3)
	{
	
	cout<<"Please choose an option.\n";
	cout<<"1.Find Median\n2.Find Mode\n3.Quit\n";
	cin>>choice;

	
		if (choice==1){
		cout<<"the median is "<<median(marray, sizeptr)<<endl;}
		else if (choice==2){
			cout<<"the mode is "<<mode(marray,sizeptr)<<endl;}
		else if (choice == 3){
			cout << "Good Bye!"<< endl;
			
		}
		else {
			cout<<"Invalid input\nPlease try again.";}
		
	}


	
	system("pause");
	return 0;
}

int median(int marrayArg[],int *sizeptr)
{
	int median;
	if (*sizeptr%2==0){
		median=(((marrayArg[*sizeptr/2])+(marrayArg[(*sizeptr/2)+1]))/2);
	}
	else {//(*sizeptr%2=1)
		median=marrayArg[(*sizeptr/2)+1];
	}
	return median;
	
}

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












