#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int i, f, resultado;

	cin >> i >> f;

	resultado = ((f + i) * (f - i + 1)) / 2;

	cout << resultado << endl;

	return 0;
}