#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n = 0, a[101][2] = { -1 }, b[101] = { -1 }, k = 0;
	int c[101][2] = { -1 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i][0] >> a[i][1];
		b[i] = 1;
	}
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (b[i] != 0 && b[j] != 0)
			{
				if (a[i][0] >= a[j][0] && a[i][1] >= a[j][1])
					b[j] = 0;
				else if (a[i][0] <= a[j][0] && a[i][1] <= a[j][1])
					b[i] = 0;
				else
					continue;
			}
			else
				continue;
		}

	for (int i = 0; i < n; i++)
	{
		if (b[i] != 0)
		{
			c[k][0] = a[i][0];
			c[k][1] = a[i][1];
			k++;
		}
	}
	int temp = 0;
	for (int i = 0; i < k; i++)
		for (int j = i + 1; j < k; j++)
		{
			if (c[i][0]>c[j][0])
			{
				temp = c[j][0];
				c[j][0] = c[i][0];
				c[i][0] = temp;

				temp = c[j][1];
				c[j][1] = c[i][1];
				c[i][1] = temp;
			}
		}
	for (int i = 0; i < k - 1; i++)
	{
		printf("(%d,%d),", c[i][0], c[i][1]);
	}
	printf("(%d,%d)", c[k - 1][0], c[k - 1][1]);
	return 0;
}
