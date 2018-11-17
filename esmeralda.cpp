#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{

	int n, c;

	cin >> n;

	int caixas[n];

	for (int i = 0; i < n; i++) {

		cin >> caixas[i];
	}

	cin >> c;

	for (int i = 0; i < n; ++i)	{

		if (c == caixas[i]) {

			cout << c << endl;

			break;
		}

		if (i == (n - 1)) {

			cout << "-1" << endl;
		}
	}

		
	return 0;
}