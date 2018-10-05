#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{

	int b, p, potesNecessarios;

	cin >> b >> p;

	b = (b * 1000);

	potesNecessarios = (b / p);

	cout << potesNecessarios << endl;
		
		return 0;
}