#include <iostream>
#include <iostream>
using namespace std;

double classScores[5];
double *scoresPtr = classScores;

void inputScores(){
	for (int i = 0; i < 5; i++){
		cout << "Please enter score:"<< endl;
		cin >> *(scoresPtr + i);
	}
}

double sortedScores(double &scores, int n){
	int temp;
	for (int i = 0; i < n - 1; i++ ){
	
		for (double j = 0; j < n - 1; j++){
			if (scores[j] > scores[j+1]){
				temp = scores[j];
				scores[j] = scores[j+1];
				scores[j+1] = temp;
			}
		}
	}
}

int main()
{
	inputScores();
	cout << scoresPtr;
	sortedScores( classScores, 5)
	cout << scoresPtr;
	return 0;
}
