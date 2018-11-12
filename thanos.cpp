#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

	int P, pop;

	cin >> P;


	for (int i = 0; i < P; i++) {

		cin >> pop;

		if (pop % 2 == 0) {

			cout << "Thanos nao poupara o Planeta " << i + 1 << "." << endl;

		} else {

			cout << "Thanos poupara o Planeta " << i + 1 << "." << endl;
		}

	}	
	
	return 0;
}

/*

3
100008
3817
17232


*/