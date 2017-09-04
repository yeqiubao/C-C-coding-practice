#include<iostream>
using namespace std;
int main()
{
	int a;
	while (cin >> a)
	{
		int  n = -1, m = 0, b[3] = { 0 };
		for (int j = 3; j < 8; j = j + 2)
		{
			if (a%j == 0)
			{
				n++;
				b[n] = j;
			}
		}
		if (n == -1)
			cout << "n";
		else
		{
			for (int i = 0; i < 3; i++)
			{
				if (b[i] != 0)
					cout << b[i] << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}