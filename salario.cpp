#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	
	string nome;

	double salarioFixo, montanteTotal, total;

	cin >> nome >> salarioFixo >> montanteTotal;

	total = salarioFixo + montanteTotal * 0.15f;

	cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;

	return 0;
}