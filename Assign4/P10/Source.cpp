#include<iostream>
using namespace std;
void deletefunc(char s[20], char c);

int main()
{
	
	char s[20], c;
	cout << "enter a string and a character";
	cin >> s;
	cin >> c;
	deletefunc(s, c);
	cout << s;


	system("pause");
	return 0;
}

void deletefunc(char s[20], char c)
{
	int i,j;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			j = i;
			while (s[j] != '\0')
			{
				s[j] = s[j+ 1];
				j++;
			}
			
		}
	}

}