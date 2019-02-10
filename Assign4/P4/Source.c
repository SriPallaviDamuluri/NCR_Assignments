#include<stdio.h>
#include<conio.h>
void reverse(char *string);

int main()
{
	char str[] = "nice to meet you";
	char *s = str;
	reverse(s);
	_getch();
	return 0;
}

void reverse(char *string)
{
	if (*string)
	{
		reverse(string + 1);
		printf("%c", *string);
	}
	
}