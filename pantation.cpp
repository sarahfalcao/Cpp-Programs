#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n; // Quantidade de Plantas
	int t; // Dias necessários para morrer sem cuidado
	int k; // 

	while (true) {

		cin >> n >> k >> t;

		int plantas[n];

		for (int i = 0; i < n; ++i)
		{
			plantas[i] = t;
		}

		int l, r;

		for (int i = 0; i < k; ++i)
		{
			cin >> l >> r;

			l--;
			r--;

			for (int j = l; j <= r; ++j)
			{
				if (plantas[j] != 0) {
					plantas[j] = t;
				}
			}

			for (int j = 0; j < l; ++j)
			{
				if (plantas[j] != 0) {
					plantas[j]--;
				}
			}

			for (int j = r + 1; j < n; ++j)
			{
				if (plantas[j] != 0) {
					plantas[j]--;
				}	
			}
		}

		int plantasVivas = n;

		for (int i = 0; i < n; ++i)
		{
			if (plantas[i] == 0) {
				plantasVivas--;
			}
		}

		cout << plantasVivas << " ";

		for (int i = 0; i < n; ++i)
		{
			if (plantas[i] != 0) {
				
				cout << i + 1 << " ";
			}
		}	

		cout << endl;
		
	} 
	
	return 0;
}

/*
10 5 2
1 10
2 9
3 8
2 7
3 6

*/