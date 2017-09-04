#include <iostream>
#include <queue>
using namespace std;
int main(){
	int a[200],N,K,change;
	cin >> N;
	cin >> K;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	/*for (int k = 0; k < K; k++){
		for (int j = k+1; j < N; j++){
			if (a[k] <= a[j]){
				change = a[k]; a[k] = a[j]; a[j] = change;
			}

		}
	}*/
	priority_queue<int>	q;
	for (int i = 0; i < N; i++) {
		q.push(a[i]);
	}
	for (int i = 0; i < K - 1; i++) {
		q.pop();
	}
	cout<<q.top()<< endl;
	return 0;
}