#include <iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f,n;
	cin >> n;
	a = n / 100;
	b = (n - 100 * a) / 50;
	c = (n - 100 * a - 50 * b) / 20;
	d = (n - 100 * a - 50 * b - 20 * c) / 10;
	e = (n - 100 * a - 50 * b - 20 * c - 10 * d) / 5;
	f = n - 100 * a - 50 * b - 20 * c - 10 * d - 5 * e;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	return 0;
}