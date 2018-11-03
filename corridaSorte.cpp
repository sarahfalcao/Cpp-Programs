#include <iostream>

using namespace std;

#define BRANCA 10
#define VERMELHA 50
#define PRETA 100

int main(int argc, char const *argv[])
{

	int n, maior = 0, indiceMaior = 1;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		char letra;

		int pontos = 0;

		while (cin >> letra, letra != 'A') {
			
			if (letra == 'B') {
				pontos += BRANCA;
			}
			else if (letra == 'V') {
				pontos += VERMELHA;
			}
			else if (letra == 'P') {
				pontos += PRETA;
			}
		}

		if (pontos > maior) {
			maior = pontos;
			indiceMaior = i + 1;
		}
	}

	cout << indiceMaior << endl;

	return 0;
}