#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int comida, aux1, aux2;

	comida = 0;

	for (int i = 0; i < 3; ++i)
	{
		cin >> aux1 >> aux2;

		comida += aux1 * aux2;
	}

	cout << comida << endl;

	return 0;
}