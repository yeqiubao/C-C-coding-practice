#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n = 0, m = 0, steps[20] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
	cin >> n;
	char a = 'y';
	for (int y = 0; y < n; y++)
	{
		int orig[16][17] = { 0 }, min = 0, k = 0, h = 1;
		int paint[16][17] = { 0 }, temp=0;
		cin >> m;
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= m; j++)
			{
				cin >> a;
				if (a == 'y')
					orig[i][j] = 1;
				else
					orig[i][j] = 0;
			}
		for (int i = 1; i <= m; i++)
			h = h * 2;
		for (int i = 0; i <= h - 1; i++)
		{
			k = i; min = 0;
			for (int j = 1; j <= m; j++)
			{
				paint[1][j] = k % 2;
				k = k / 2;
				if (paint[1][j] == 1)
					min++;
			}
			for (int i = 2; i <= m; i++)
				for (int j = 1; j <= m; j++)
				{
					paint[i][j] = (orig[i - 1][j] + paint[i - 1][j] + paint[i - 1][j - 1] + paint[i - 1][j + 1] + paint[i - 2][j] + 1) % 2;
					if (paint[i][j] == 1)
						min++;
				}
			for (int i = 1; i <= m; i++)
			{
				temp = (orig[m][i] + paint[m][i] + paint[m][i - 1] + paint[m][i + 1] + paint[m - 1][i]) % 2;
				if (temp == 0)
					break;
				else if (i == m&&steps[y] == -1)
					steps[y] = min;
				else if (i == m&&steps[y] != -1)
				{
					if (min < steps[y])
						steps[y] = min;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (steps[i] == -1)
			cout << "inf" << endl;
		else
			cout << steps[i] << endl;
	}
	return 0;
}

