#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
	int n;
	int media = 0;
	int qtd = 0;

	while (cin >> n, n > 0) {

		media += n;
		qtd++;		
	}
	
	media /= qtd;

	cout << media << endl;

	return 0;
}