#include <iostream>
 using namespace std;

 struct ListNode
 {
 double value;
 ListNode *next;
 ListNode( int value1,ListNode *next1=nullptr)
 {
	 value=value1;
	 next=next1;
 }
 };
 ListNode *first;
void ADD ( int number)
{
if (first== nullptr)
	
	
	    first=new ListNode(number);
	    else// if the list is not empty
{	    
	    ListNode *TPR=first;
	    while( TPR->next != nullptr)
	    TPR=TPR->next;
	    
	    TPR->next=new ListNode(number);
}	    
	 
}
void Display()
{
	ListNode *ptr=first;

	 while(ptr!=nullptr)
	 {
		 cout<<ptr->value<<endl;
		 ptr=ptr->next;
	 }
}
int main ( )
 {
  
	ADD(23);
ADD(13);
ADD(14);
ADD(17);
ADD(24);
ADD(69);
ADD(74);

	Display();

 system("pause");
 return 0;
 }

