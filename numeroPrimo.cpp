#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int x;

		cin >> x;

		bool isPrime = true;

		if (x > 1) {

			if (x <= 3) {

				isPrime = true;
			}
			else {

				if (x % 2 == 0 || x % 3 == 0) {

					isPrime = false;
				}	
				else {

					for (int j = 5; j * j <= x; j += 2)
					{
						if (x % j == 0) {

							isPrime = false;
							break;
						}
					}
				}
			}
		}	
		else {
			
			isPrime = false;
		}	

		if (isPrime) {

			cout << x << " eh primo" << endl;
		}
		else {

			cout << x << " nao eh primo" << endl;
		}
	}

	return 0;
}