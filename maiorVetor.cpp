#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;

	int sequencia[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> sequencia[i];
	}

	int maior = 0, pos = 0;

	for (int i = 0; i < n; ++i)
	{
		if (sequencia[i] > maior) {

			maior = sequencia[i];
			pos = i;
		}
	}

	cout << maior << endl;
	cout << pos << endl;

	return 0;
}