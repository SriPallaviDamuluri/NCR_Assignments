#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int replace(char *string, int);
int main()
{
	int n,len;
	char s[] = "The Cat sat";
	len = strlen(s);
	char *cat = NULL;
	cat = (char *)malloc((len + 1) * sizeof(char));
	cat = s;
    n = replace(cat,strlen(cat));
	printf(" string after replacement %s", cat);
	printf("\nno. of replacements :%d", n);
   _getch();
	return 0;
}

int replace(char *string,int len)
{
	int i, c = 0;
	for (i=0;i<len;i++)
	{
		if (string[i] == ' ')
		{
			string[i] = '-';
			c++;
		}
		
	}
	return c;
	
}