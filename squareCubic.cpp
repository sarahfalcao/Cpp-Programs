#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {

		cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
	}

	return 0;
}