#include "MyList.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <time.h>
#include <vector>

 using namespace std;


 void MyList::add(int number)// Here you will add the node to the end of the list
{
	if (head == NULL){

		head = new ListNode(number);


	}else {
		ListNode *add;
		add = head;
		while(add -> next != NULL){
			add = add -> next;
		}
		add -> next = new ListNode(number);
		add = NULL;
		delete add;
	}
// if it is the empty list, create the node and this node will become the first and only ndode in the list.
 //if the list is not empty, create the new pointer and set the pointer to beginning of the list/ Use that pointer to traverse the list.
	//if new pointer next point to null that will indicate new pointer is pointing to last node, create the node and add it after the last node.


 }

void MyList::displayList()
 {
 	ListNode *iter = head;
 	while(iter  != NULL){
 		cout << iter -> value << endl;
 		iter = iter -> next;

	 }
	 delete iter;

	 // Here you will traverse the list
	 // create new pointer and point that to the beginning of the list
	 //Process at the node.move the pointer to the next node if there is one
}

void MyList::addSortedElement(int number){
    ListNode *nodePtr,*previousNodePtr, *middlePtr;
    middlePtr = new ListNode(number);
    nodePtr = head -> next;
    previousNodePtr = head;
    
    
    if(head == NULL || head -> value >= number){
    	head = new ListNode(number, head);
    	
	}else{
    while(nodePtr != NULL){
        if(nodePtr -> value >= number && previousNodePtr -> value <= number){
            previousNodePtr -> next = middlePtr;
            middlePtr -> next = nodePtr;
            break;
		}else{
            nodePtr = nodePtr -> next;
            previousNodePtr = previousNodePtr -> next;
        }
    }
	}
}


 MyList::~MyList()// Here you will destroy the entire list to deallocate the memory
 {
 	ListNode *ptr = head;
 	ListNode *trash = ptr;

 	while (ptr != NULL){
 		ptr = ptr -> next;
 		delete trash;
 		trash = ptr;

	 }
	 head = NULL;
	 displayList();

	 //create the pointer start at the beginning of the list and strp through one node at a time
	 //creat the second pointer to follow previous pointer  and use the second pointer to delete each node as soon as previous pointer passed on to node's successor
}


int generateRand(){
	
	const int MAXRAND = 100;
	return (rand() %MAXRAND) + 1;
}
	
	
	
int  main()
{
	srand(time(NULL));
	MyList LabList;
//----------------------------------------------
//Lab Part 1, skeleton
	/**LabList.add("Hello");
	LabList.add("World");
	LabList.add("Lab_7");
	LabList.add("Brad");
	LabList.add("Higgins");


	LabList.displayList();**/
//-----------------------------------------------
//Lab Part 2, inserting sorted element;

	const int ARRAYSIZE = 6;
	vector<int> sorted;


	for (int i =0; i < ARRAYSIZE; i++){

        sorted.push_back(generateRand());
	}

    sort(sorted.begin(), sorted.end());
    cout << "sorted Linked List: "<< endl;
    for (int i = 0; i < sorted.size(); i++){

        cout << sorted[i] << endl;
        LabList.add(sorted[i]);
    }


	int random = generateRand();
    cout << random << " is the element we want to add" << endl;
    LabList.addSortedElement(random);

    LabList.displayList();





}
