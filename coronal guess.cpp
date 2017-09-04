#include <iostream>
using namespace std;
int a;
void process(){
	if (a == 1)
		cout << "End" << endl;
	else if (a % 2 == 0){
		cout << a << "/" << 2 << "=" << a / 2 << endl;
		a = a / 2;
		process();
	}
	else if (a % 2 == 1){
		cout << a << "*" << 3 << "+" << 1 <<"="<< (a * 3 + 1) << endl;
		a = a * 3 + 1;
		process();
	}
}
int main(){
	cin >> a;
	process();
	return 0;
}