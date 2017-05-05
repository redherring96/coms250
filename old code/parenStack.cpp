#include <iostream>
#include <stack>
#include <string>
#include <list>
using namespace std;



int main(){
string userInput;
stack<char, list<char> > parenStack;
cout << "Please input string..." << endl;
cout << ">";
getline(cin, userInput);
cout << "got line :" << userInput;
cout << userInput.length();

for(int i = 0; i < userInput.length(); i++){
	if(userInput[i] == '('|| userInput[i] == ')'){
		parenStack.push(userInput[i]);
	}
}

cout << "These are the parenthesis: " << endl;
while(!parenStack.empty())	{
	cout << parenStack.top() << " " << endl;
	parenStack.pop();
}
system("pause");
	
}

