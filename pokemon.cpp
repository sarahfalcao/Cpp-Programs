#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	
	int n;
	int pokeTotal = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {

		int q;

		cin >> q;

		pokeTotal += q;

		}

	cout << pokeTotal << endl;

	return 0;
}