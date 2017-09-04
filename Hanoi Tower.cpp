#include <iostream>
using namespace std;
void move(int m, char x, char y, char z)
{
	if (m == 1)
		cout << "move from " << x << " to " << z << endl;
	else
	{
		move(m - 1, x, z, y);
		cout << "move from " << x << " to " << z << endl;
		move(m - 1, y, x, z);
	}
}
int main()
{
	char a='A', b='B', c='C';
	int n;
	cin >> n;
	move(n, a, b, c);
	return 0;
}