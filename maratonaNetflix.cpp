#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int K1, K2, K3, K4, K5, netflix;

	cin >> K1 >> K2 >> K3 >> K4 >> K5;

	netflix = 2 * (K1 + K2 + K3 + K4 + K5);

	cout << netflix << endl;

	return 0;
}