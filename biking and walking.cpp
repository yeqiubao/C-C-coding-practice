#include <iostream>
using namespace std;
int main(){
	int n, a[20];
	double t1[20], t2[20];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		t1[i] = 50 + a[i] / 3;
		t2[i] = a[i] / 1.2;
	}
	for (int j = 0; j < n; j++){
		if (t1[j] < t2[j])
			cout << "Bike" << endl;
		else if (t1[j] > t2[j])
			cout << "Walk" << endl;
		else
			cout << "All" << endl;
	}
	return 0;
}