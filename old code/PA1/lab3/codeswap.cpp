#include<iostream>
#include<array>
#include<string>

using namespace std;

void Ascend(double *ptr, string *str);
double Average(double *ptr);
int number;
int main ()
{
    //int number;
    //double testScores[];
    double *ptr, ave;
    string *strPtr;
    
    
    cout << "How many students";
    cin >> number;
    ptr = new double[number];
    strPtr = new string[number];
    
    
    for (int i = 0; i<number; i++)
    {
    	cout << "What was student " << (i+1) << " name?" << endl;
    	cin >> *(strPtr + i);
        cout << "What was test score number " << (i+1) <<  " ?" << endl;
        cin >> *(ptr+i);
        if (*(ptr+i)<0 && *(ptr+i) > 100) // brad: added the ptr > 100 argument
        {
            cout << "Invalid\n";
            cout << "What was test score number " << (i+1) <<  " ?\n";
            cin >> *(ptr+i);
        }
    }
    cout << "These are the test scores: \n";  //brad: uses for loop to print pointer values
    for (int i=0; i < number; i++){
    	cout << *(strPtr + i) << "    " << *(ptr + i) << endl;
    }
    
   /** cout << "These are the test scores: \n";
    cout << *ptr << endl;
    cout << *(ptr+1) << endl;
    cout << *(ptr+2) << endl;
    cout << *(ptr+3) << endl;
    cout << *(ptr+4) << endl;**/
    
    ave = Average(ptr);
    cout << "This is the average: " << ave << endl;
    Ascend(ptr, strPtr);
    system("pause");
    
    
    ptr = NULL;
    strPtr = NULL;
    delete ptr;
    delete strPtr;
    
    return 0;
}

void Ascend( double* ptr, string *str)
{
	int temp = 0;
	string strTemp = "";
    int size = number;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if(*(ptr+j) > *(ptr+j+1))
            {
                temp = *(ptr+j);
                strTemp = *(str + j);
                *(ptr+j) = *(ptr+j+1);
                *(str + j) = *(str + j + 1);
                *(ptr+j+1) = temp;
                *(str + j+ 1) = strTemp;
            }
        }
    }       
    for(int i = 0; i < size; i++)
    {
        cout <<*(str + i)<< "    " << *(ptr+i) << endl;
    }
}

double Average(double *ptr)
{
    double average, total=0;
    for (int i = 0; i<=4; i++) 
    {
        total += (*(ptr+i));
    }
    average = total/5;
    return average;
}
