#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;

	while (n != 0) {

		if (n % 2 == 0) {
			cout << n << " eh par" << endl;
		}
		else {
			cout << n << " eh impar" << endl;
		}

		cin >> n;
	}
	
	return 0;
}