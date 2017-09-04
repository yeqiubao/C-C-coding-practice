a#include <iostream>
using namespace std;
char children[100] = { ' '};
char g, b;
int boy = 1;
void combination()
{
	for (int i = 0; i < 100; i++)
	{
		if (children[i] == b)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (children[j] == g)
				{
					boy = j;
					children[i] = ' ';
					children[j] = ' ';
					cout << j << " " << i << endl;
					break;
				}
			}
			break;
		}
	}
		if (boy != 0)
			combination();
}
int main()
{
	
	cin.getline(children, 100);
	g = children[0];
	for (int i = 0; i < 100; i++)
	{
		if (children[i] == '\0')
		{
			b = children[i - 1];
			break;
		}
	}
	/*
	if (children[2] == '\0')
	cout << children[0]<<children[2]<<children[1];
	*/
	combination();
	return 0;
}