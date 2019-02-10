#include<iostream>
using namespace std;
int any(char s[20], char s1[20]);

int main()
{

	int l;
	char s[20], s1[20];
	cout<<"Enter the strings";
	cin>>s;
	cin>>s1;
	l = any(s, s1);
	cout<<"location of first match: "<<l;

	system("pause");
	return 0;
}
int any(char str[20], char str1[20])
{
	int i, j;

	for (i = 0; str[i] != '\0'  ; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str[i] == str1[j])
			{
				return i;
				
			}
		}
	}
	return -1;
}