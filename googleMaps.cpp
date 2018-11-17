#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

	int n;

	cin >> n;

	int ruas[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> ruas[i];
	}
	
	for (int i = n - 1; i >= 0; --i)
	{
		cout << ruas[i] << " ";
	}

	return 0;
}