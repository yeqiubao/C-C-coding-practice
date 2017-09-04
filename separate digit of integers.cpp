#include <iostream>
using namespace std;
int main(){
	int n, a, b, c;
	cin >> n;
	a = n / 100;
	b = (n - 100 * a) / 10;
	c = n - 100 * a - 10 * b;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}