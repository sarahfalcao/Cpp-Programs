#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	
	float tempo, velocidadeMedia, litros;

	cin >> tempo >> velocidadeMedia;

	litros = tempo * velocidadeMedia;

	litros = litros / 12;

	cout << fixed << setprecision(3) << litros << endl;


	return 0;
}