#include <iostream>
using namespace std;

int main()
{

	while (1)
	{
		char a[101] = { ' ' };
		int left[101] = { 0 }, right[101] = { 0 }, l = -1, r = -1;
		cin.getline(a, 101, '\n');
		cout << a << endl;
		for (int i = 0; a[i] != '\0'; i++)
		{
			if (a[i] == '(')
			{
				a[i] = '$';
				l++;
				left[l] = i;
			}
			else if (a[i] == ')')
			{
				a[i] = '?';
				r++;
				right[r] = i;
			}
			else
				a[i] = ' ';
		}
		int tempr = r, templ = l;
		for (int i = l; i >= 0; i--)
		{
			for (int j = 0; j < r + 1; j++)
			{
				if (left[i] < right[j])
				{
					a[left[i]] = ' ';
					a[right[j]] = ' ';
					left[i] = -1;
					right[j] = -1;
					tempr--;
					templ--;
					break;
				}
			}
			if (tempr == -1 || templ == -1)
				break;
		}
		cout << a << endl;
		/*
		for (int i = 0; a[i] != '\0'; i++)
		{
		if (a[i] == '?' || a[i] == '$')
		cout << a[i];
		else
		cout << ' ';
		if (a[i + 1] == '\0')
		cout << endl;
		}
		*/
	}
	return 0;
}
