#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, maior, pos;

	maior = 0;

	for (int i = 0; i < 100; ++i)
	{
		cin >> n;

		if (n > maior) {

			maior = n;

			pos = i + 1;
		}
	}

	cout << maior << endl;
	cout << pos   << endl;


	return 0;
}