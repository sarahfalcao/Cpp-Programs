#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;

	int resultado = 1;

	for (int i = n; i >= 2; i--)
	{
		resultado *= i;
	}

	cout << resultado << endl;

	return 0;
}