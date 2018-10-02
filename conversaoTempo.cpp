#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int tempo;

	cin >> tempo;

	if (tempo < 60) {

		cout << "0" << ":" << "0" << ":" << tempo << endl;

		}
		
	else if (60 <= tempo && tempo < 3600) {

		cout << "0" << ":" << (tempo / 60) << ":" << (tempo % 60) << endl;

		}

	
	else if (tempo >= 3600) {

		cout << (tempo / 3600) << ":" << ((tempo % 3600) / 60) << ":" << (tempo % 60) << endl;


		}

		


	return 0;
}

	
