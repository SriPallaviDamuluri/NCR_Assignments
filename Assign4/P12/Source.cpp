#include<iostream>
using namespace std;
void deletes2(char s[20], char s1[20]);

int main()
{

	char s[20], s1[20];
	cout << "Enter the strings";
	cin >> s;
	cin >> s1;
    deletes2(s, s1);
	cout << s;

	system("pause");
	return 0;
}
void deletes2(char str[20], char str1[20])
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str[i] == str1[j])
			{
				k = i;
				while (str[k] != '\0')
				{
					str[k] = str[k + 1];
					k++;
				}
				i = i - 1;
				break;
				
			}
		}
		
	}
}