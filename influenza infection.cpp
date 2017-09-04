#include <iostream>
using namespace std;
int main(){
	int a[100][100] = { 0 },n,m,number=0;
	char b[100][100];
	cin >> n;
	for (int i = 1; i < n+1; i++)
		for (int j = 1; j < n + 1; j++){
			cin >> b[i][j];
			switch (b[i][j]){
			case'.':a[i][j] = 1; break;
			case'#':a[i][j] = 0; break;
			case'@':a[i][j] = 2; break;
			}
		}
	cin >> m;
	for (int i = 0; i < m - 1; i++)
		for (int j = 1; j < n + 1; j++){
			for (int k = 1; k < n + 1; k++){
				if (a[j][k] != 2*(i+1))
					continue;
				else{
					if (a[j - 1][k] == 1)
						a[j - 1][k] = 2 * (i + 2);
					if(a[j + 1][k] ==1)
						a[j + 1][k]=2*(i+2);
					if(a[j][k - 1] ==1) 
						a[j][k - 1]=2*(i+2);
					if (a[j][k + 1] == 1)
						a[j][k + 1] = 2 * (i + 2);;
				}
			}
		}
	for (int i = 0; i < n + 1; i++)
		for (int j = 0; j < n + 1; j++)
			if (a[i][j] != 0 && a[i][j] != 1)
				number++;
	cout << number << endl;
	return 0;

}