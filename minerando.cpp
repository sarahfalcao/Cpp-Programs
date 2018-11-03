#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	
	char bloco;

	int numP, numC, numO, numD, numTotal;

	numP = numC = numO = numD = numTotal = 0;

	while (cin >> bloco, bloco != 'M') {

		if (bloco == 'P') {
			numP++;
		}

		else if (bloco == 'C') {
			numC++;
		}

		else if (bloco == 'O') {
			numO++;
		}

		else if (bloco == 'D') {
			numD++;
		}
	}
	
	numTotal = numC + numO + numD;

	cout << numC << endl;
	cout << numO << endl;
	cout << numD << endl;
	cout << numTotal << endl;

	return 0;
}