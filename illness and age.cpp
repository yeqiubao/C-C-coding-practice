#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n, a[100], b = 0, c = 0, d = 0, e = 0;
	cin >> n;
	if (n > 0 && n <= 100){
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] <= 18)
				b++;
			else if (a[i] >= 19 && a[i] <= 35)
				c++;
			else if (a[i] >= 36 && a[i] <= 60)
				d++;
			else
				e++;
		}
		cout << "1-18: " << fixed << setprecision(2) << 100.00 * b / n << "%" << endl;
		cout << "19-35: " << fixed << setprecision(2) << 100.00 * c / n << "%" << endl;
		cout << "36-60: " << fixed << setprecision(2) << 100.00* d / n << "%" << endl;
		cout << "60-: " << fixed << setprecision(2) << 100.00 * e / n << "%" << endl;
	}
	else
		cout << "wrong n" << endl;
	return 0;
}