#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	float nota;
	int frequencia;

	cin >> nota >> frequencia;

	if (nota >= 50 && frequencia >= 75 || nota >= 70) {

		cout << "APROVADO";
	}

	else {

		cout << "REPROVADO";
	}


	return 0;
}