#include <iostream>
using namespace std;
int main(){
	char s[80];
	int a =0,e=0,i=0,o=0,u=0;
	cin.getline(s, 80);
	for (int j = 0; j < 80; j++){
		if (s[j] == 'a')
			a++;
		if (s[j] == 'e')
			e++;
		if (s[j] == 'i')
			i++;
		if (s[j] == 'o')
			o++;
		if (s[j] == 'u')
			u++;
	}
		cout << a <<" "<< e <<" "<< i <<" "<< o <<" "<< u << endl;
		return 0; 

}