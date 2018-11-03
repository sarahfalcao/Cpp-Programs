#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	int idadeTotal = 0;
	int qtdIdades = 0;

	while (cin >> n, n >= 0) {

		idadeTotal += n;
		qtdIdades++;
	}

	cout << fixed << setprecision(2) << (float)idadeTotal/qtdIdades << endl;

	return 0;
}