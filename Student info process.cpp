#include <iostream>
#include <cstdio>
using namespace std;
class student{
private:
	char name[100],a;
	int g1, g2, g3, g4, age, average,number;
public:
	void input(){
		cin.getline(name, 100, ',');
		cin >> age;
		a = getchar();
		cin >> number>>a>>g1 >> a >> g2 >> a >> g3 >> a >> g4;
	}
	void grade(){
		average = (g1 + g2 + g3 + g4) / 4;
	}
	void output(){
		cout << name << ',' << age << ',' << number << ',' << average << endl;
	}
};
int main(){
	student y;
	y.input();
	y.grade();
	y.output();
	return 0;
}