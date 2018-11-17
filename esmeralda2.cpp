#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{

	int n, c;

	cin >> n;

	int caixas[n];

	bool achouEsmeralda = false;

	for (int i = 0; i < n; i++) {

		cin >> caixas[i];
	}

	cin >> c;

	for (int i = 0; i < n; ++i)	{

		if (c == caixas[i]) {

			achouEsmeralda = true;
			
			cout << c << endl;

			break;
		}
	}

	if (!achouEsmeralda) {

		cout << "-1" << endl;
	}

		
	return 0;
}