#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int tempo;

	cin >> tempo;

	if (tempo < 60) {

		cout << "0" << ":" << "0" << ":" << tempo;
		
	}

	if (60 <= tempo < 3600) {

		cout << "0" << ":" << (tempo / 60) << ":" << (tempo % 60);
	
	}

	if (tempo >= 3600) {

		cout << (tempo / 60) << ":" << ((tempo % 60) / 60) << ":" << (tempo % 60);
	}


	return 0;
}

	
