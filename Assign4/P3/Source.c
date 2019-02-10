#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
	int i;
	char s[] = "when the sun shines on the mountains";
	char a[] = " WHEN THE NIGHT IS FULL OF DAY";

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%c", toupper(s[i]));
	}
	printf("\n");
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%c", tolower(a[i]));
	}
	_getch();
	return 0;
}