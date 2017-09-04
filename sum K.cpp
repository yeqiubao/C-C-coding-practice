#include <iostream>
using namespace std;
int main(){
	int n, k, a[1000],m=0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int j = 0; j < n; j++){
		for (int t = 1; t < n; t++){
			if ((a[j] + a[t]) == k){
				cout << "yes" << endl;
				m = 1;
				break;
			}
		}
		if (m == 1)
			break;
		if (j >= n - 1)
			cout << "no" << endl;
	}
	return 0;
}