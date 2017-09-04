#include <iostream>
#include <string>
using namespace std;
int j;
char str[500] = { '\0' };
void convert(){
	j--;
	if (str[j] != ' ' && (j >= 0)){
		cout << str[j];
		convert();
	}

}
int main(){
	cin.getline(str, 500);
	for (int i = 0; i < 500; i++){
		j = i + 1;
		if (str[i] == '\0')
			break;
		else if (str[i] == ' ')
			cout << ' ';
		else if (str[i + 1] == ' ' || str[i + 1] == '\0')
			convert();
	}
	return 0;
}