#include <iostream>
using namespace std;
int main(){
	int n,N,a,b;
	cin >> n;
	for (int i =10; i <=n; i++){
		N = i;
		a = N /10;
		b = N - a * 10;
		if ((N % (a + b)) == 0)
			cout << N << endl;
	}
	return 0;

}