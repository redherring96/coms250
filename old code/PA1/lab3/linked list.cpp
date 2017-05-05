#include <iostream>
using namespace std;

//struct Node{
//	double value;
//	Node *next;
	
//};

class Node{
	private:
		double value;
		Node *next;
		static Node *head;
	public:
		Node(double val){
			value = val;
			next = NULL;
		}
		
		Node(double val, int pos){
			value = val;
			addNode(pos, &next );
		}
		
		addNode(int position, Node* ptr){
			Node *iterator = head;
			for(int i=0; i < position - 1; i++){
				iterator= iterator -> next;
			}
			
			iterator -> next = ptr;
			iterator = iterator -> next;
			ptr -> next = iterator;
			
			
			
		}
	
	
};

Node::head = NUll;


int main(){
	//Node *head = new Node(12.5);
	//head -> next = NULL;
//	head -> value = 12.5;
	//cout << "first element in list: " << head -> value << endl;
	Node *first = new Node(12.5);	
/**	//second node
	Node *second = new Node;
	second -> value = 34;
	second -> next = NULL;
	head -> next = second;
	cout <<"second element in list: "<< head -> next -> value << endl;
	
	//third node

	Node *third = new Node;
	third -> value = 46;
	third->next = NULL;
	second ->next = third;
	cout <<"third element in list: " << head->next -> next -> value << endl;
	
	//fourth node
	
	Node *fourth = new Node;
	fourth -> value = 77;
	fourth -> next = NULL;
	third -> next = fourth;
	cout <<"fourth element in list: " << head -> next -> next -> next -> value << endl;
	
	Node *iterator = head;
	int desiredNode = 1;
	
	cout << "please select desired node: ";
	cin >> desiredNode;
	
	for(int i = 0; i < desiredNode - 1 ; i++){
		iterator= iterator->next;
	}
	cout << iterator->value;
	**/
	cout << head -> value
	return 0;
		

	
}
