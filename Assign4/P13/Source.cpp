#include<iostream>
using namespace std;
void expand(char s[20], char s1[20]);

int main()
{

	char s[20], s1[20];
	cout << "Enter the strings";
	cin >> s;
	expand(s, s1);
	cout << s1;
	
	system("pause");
	return 0;
}
void expand(char str[20], char str1[20])
{
	int i, j;
	

	for (i = 0, j = 0; str[i] != '\0'; )
	{
		if (str[i] == '-')
		{
			while (str1[j - 1] != str[i + 1])
			{
				str1[j] = str1[j - 1] + 1;
				j++;
			}
			i=i+2;

		}
		else
		{
			str1[j] = str[i];
			i++;
			j++;
		}
	}
	str1[j] = '\0';
}