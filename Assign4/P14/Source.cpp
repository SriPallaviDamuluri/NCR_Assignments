#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int l,i,j,k;
	char s[10],str1[10];
	cout << "enter a string";
	cin >> s;
	l = strlen(s);

	for (i = 0; i < l; i++)
	{
		
		for (j = 0; j<l; j++)
		{
			if (j - i < 0)
			{
				k = j + l - i;
			}
			else
				k = j - i;
			str1[j] = s[k];
		}
		str1[j] = '\0';
		
		cout << str1<<endl;
        
	}

	system("pause");
	return 0;
}