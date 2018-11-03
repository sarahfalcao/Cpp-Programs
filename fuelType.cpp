#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, alc, gas, die;

	alc = gas = die = 0;

	while (cin >> n, n != 4) {

		if (n == 1) {
			alc++;
		}
		else if (n == 2) {
			gas++;
		}
		else if (n == 3) {
			die++;
		}
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alc << endl;
	cout << "Gasolina: " << gas << endl;
	cout << "Diesel: " << die << endl;

	return 0;
}