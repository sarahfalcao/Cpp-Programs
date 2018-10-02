#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int a, b;

	cin >> a >> b;

	if (a>b) {

		if (a%b == 0) {
		
		cout << "Sao Multiplos";
		}

		else {

		cout << "Nao sao Multiplos";
		}

		
	}

	if (b>a) {

		if (b%a == 0) {

		cout << "Sao Multiplos";
		}

		else {

		cout << "Nao sao Multiplos";
		}

	}


	return 0;
}