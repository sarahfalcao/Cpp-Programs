#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	
	char 1, 2, 3, 4, 5;
	int quantidade;
	float total;

	cin >> codigo >> quantidade;

	1 = 4.00;
	2 = 4.50;
	3 = 5.00;
	4 = 2.00;
	5 = 1.50;

	total = (quantidade * codigo);

	cout << "Total: R$ " << total;


	return 0;
}