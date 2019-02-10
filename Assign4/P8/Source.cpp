#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i, j, n, c;
	char *names[20], temp[50];

	cout << "enter number of strings";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> names[i];
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			c = strcmp(names[i], names[j]);
			if (c > 0)
			{
				strcpy_s(temp, names[i]);
				strcpy_s(names[i], names[j]);
				strcpy_s(names[j], temp);
			}
		}

	}
	for (i = 0; i < n; i++)
	{
		cout << names[i] << endl;
	}
	system("pause");
	return 0;
}