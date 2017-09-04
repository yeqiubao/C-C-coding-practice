#include <iostream>
using namespace std;
int main(){
	int L, M, a[100][2],b[10001],sum=0;
	cin >> L >> M;
	for (int i = 0; i < L+1; i++)
		b[i] = 1;
	for (int i = 0; i < M; i++)
		cin >> a[i][0] >> a[i][1];
	for (int i = 0; i < M; i++){
		for (int j = a[i][0]; j < a[i][1] + 1; j++)
			b[j] = 0;
	}
	for (int i = 0; i < L + 1; i++){
		if (b[i] != 0)
			sum++;
	}
	cout << sum << endl;
	return 0;
}