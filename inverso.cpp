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

	for (int i = (n - 1); i >= 0; --i)
	{
		cout << sequencia[i] << endl;
	}

	return 0;
}