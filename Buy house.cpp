#include <iostream>
using namespace std;
int main()
{
	int N,K;
	while (cin >> N >> K){
		double price = 200.0, salary = 0.0;
		for (int i = 1; i < 22; i++)
		{
			salary = salary + N;
			if (salary >= price)
			{
				cout << i << endl;
				break;
			}
			if (i == 21)
			{
				cout << "Impossible" << endl;
				break;
			}
			price = price*((100.0 + K) / 100.0);
		}
	}
		return 0;
}