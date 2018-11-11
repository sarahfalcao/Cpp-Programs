#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int E, P, S, Q;

	cin >> E >> P;
	
	if (E < P) {

		S = P - E;

		cout << "Ok!\n" << S << endl;

	}else if (E == P) {

		cout << "Ok!\n" << endl;

	} else {

		Q = E - P;

		cout << Q << endl;

	}

	return 0;
}