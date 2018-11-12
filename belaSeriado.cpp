#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

	int S;
	int tempo;
	int maior = 0;
	
	cin >> S;

	for (int i = 0; i < S; i++) {

		cin >> tempo;

		if (tempo > maior) {

			maior = tempo;
		}

	}

	cout << maior << endl;
	
	return 0;
}