#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int m,number[50],count=0,tempnumber=0;
	float a,ill[50],tempill=0;
	cin >> m >> a;
	for (int i = 0; i < m; i++){
		cin >> number[i] >> ill[i];
		if (ill[i] >= a)
			count++;
	}
	if (count == 0)
		cout << "None." << endl;
	else {
		for (int i = 0; i < m-1; i++)
			for (int j = 0; j < m-1; j++){
				if (ill[j]>ill[j + 1]){
					tempill = ill[j];
					ill[j] = ill[j + 1];
					ill[j + 1] = tempill;
					tempnumber = number[j];
					number[j] = number[j+1];
					number[j + 1] = tempnumber;
				}
			}
		for (int i = m - 1; ill[i]>=a; i--){
			if (number[i] < 10)
				cout << 0 << 0 << number[i] <<fixed<< " " << setprecision(1) << ill[i] << endl;
			else if (number[i]<100)
				cout << 0 << number[i] <<fixed<< " " << setprecision(1) <<ill[i] << endl;
			else if (number[i] < 1000)
				cout << number[i] <<fixed<< " " << setprecision(1) << ill[i] << endl;
		}
	}
	return 0;
}