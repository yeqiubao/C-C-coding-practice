#include<iostream>
using namespace std;
int main(){
	int n;
	float b[100][3] = { 0 }, c[100][2] = { 0 }, temp = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> b[i][0]>> b[i][1]>>b[i][2];
		c[i][0] = b[i][0];
		c[i][1] = b[i][2] / b[i][1];
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (c[i][1] > c[j][1])
			{
				temp = c[j][1];
				c[j][1] = c[i][1];
				c[i][1] = temp;

				temp = c[j][0];
				c[j][0] = c[i][0];
				c[i][0] = temp;
			}
		}
	}
	
	
	/*
	for (int i = 0; i < n; i++)
	{
	cout << c[i][0] << ' ' << c[i][1] << endl;
	}
	*/
	
	for (int i = 0; i < n - 1; i++)
	{
			if (((c[i + 1][1] - c[i][1]) >= (c[n - 1][1] - c[i + 1][1])) && ((c[i + 1][1] - c[i][1]) >= (c[i][1] - c[0][1])))
			{
				cout << n - 1 - i << endl;
				for (int j = i + 1; j < n; j++)
					cout << c[j][0] << endl;
				cout << i + 1 << endl;
				for (int j = 0; j < i + 1; j++)
					cout << c[j][0] << endl;
			}
	}
	return 0;
}