#include "scores.h"
#include <iostream>
using namespace std;

Scores::Scores(){
	dubPtr = classScores;
	for (int i = 0; i < Scores::CLASS_SIZE; i++){
		cout << "Please input Score:"<< endl;
		cin >> *(dubPtr + i);
	}
	
		
}
