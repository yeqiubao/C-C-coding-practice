#include <iostream>
using namespace std;
int main()
{
	int a[10][15000] = { 0 }, b[50] = { 0 }, N = 0, k = 0, m = 1,temp=0;
	while (m==1)
	{
		cin >> N;
		if (N == 0)
			break;
		else
		{
			b[k] = N;
			for (int i = 0; i < N; i++)
				cin >> a[k][i];
		}
		k++;
	}
	for (int j = 0; j < k; j++)
	{
		for (int x = 0; x < b[j]; x++)
			for (int y = 0; y < b[j]; y++)
				if (a[j][x] >= a[j][y])
				{
					temp = a[j][y];
					a[j][y] = a[j][x];
					a[j][x] = temp;
		         }
		if (b[j] % 2 == 0)
			cout << (a[j][b[j] / 2] + a[j][b[j] / 2 - 1]) / 2 << endl;
		else
			cout << a[j][b[j] / 2] << endl;
	}
	return 0;
}
