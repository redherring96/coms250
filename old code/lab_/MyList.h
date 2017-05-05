#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>

 using namespace std;
 class MyList
 {

struct ListNode
{
 int value;
 ListNode *next;

ListNode(int valuel, ListNode *nextl = NULL)
{
	value = valuel;
	next = nextl;
}
};

 ListNode *head;
 public:
 MyList() 
 {
	 head= NULL; 
 }
 ~MyList();
 void add(int number);
 void addSortedElement(int);
 void displayList() ;
 };
 
 #endif
