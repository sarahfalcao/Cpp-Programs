#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int idade;

	cin >> idade;

	if (idade < 18) {

		cout << "Nao";

	}

	if (idade >= 18) {

		cout << "Sim";
	} 

	return 0;
}