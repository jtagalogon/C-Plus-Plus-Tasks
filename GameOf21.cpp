#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int total = 0;
	int cpTotal = 0;
	int decision = 0;
	int die1 = 0;
	int die2 = 0;

	cout << "Total = " << total << endl;
	cout << "Press '1' to Roll Dice" << endl;
	cout << "Press '0' to Quit" << endl;
	cin >> decision;
	while(total <= 21 && decision == 1){

	die1 = (rand() % 6) + 1;
	die2 = (rand() % 6) + 1;

	cpTotal = cpTotal + (die1 + die2);

	die1 = (rand() % 6) + 1;
	die2 = (rand() % 6) + 1;

	total = total + (die1 + die2);
	cout << "Total = " << total << endl;
	cout << "Press '1' to Roll Dice" << endl;
	cout << "Press '0' to Quit" << endl;
	cin >> decision;
	}

	cout << "Your Total: " << total << endl;
	cout << "Computer's Total: " << cpTotal << endl;
	if(total > 21){
		cout << "You Lose.";
	}
	else if(total == 21){
		cout << "You Win!" << endl;
	}
	else if((21 - total) < (21 - cpTotal)){
		cout << "You Win!"<< endl;
	}
	else{
		cout << "You Lose." << endl;
	}

	return 0;
}
