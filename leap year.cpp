#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (a % 4 != 0)
		cout << "N" << endl;
	else if (a % 4 == 0 && a % 100 != 0)
		cout << "Y" << endl;
	else if (a % 4 == 0 && a % 100 == 0)
	{
		if (a % 400 != 0)
			cout << "N" << endl;
		else
		{
			if (a % 400 == 0 && a % 3200 != 0)
				cout << "Y" << endl;
			else if (a % 400 == 0 && a % 3200 == 0)
				cout << "N" << endl;
		}
	}
	return 0;
}