#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, count = 0;
	char * s[] = {
		"we will teach you how to ",
		"Move a mountain ",
		"Level a building ",
		"Erase the past ",
		"Make a million " };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; s[i][j] != '\0'; j++)
		{
			if (s[i][j] == 'e')
				count++;
		}
	}

	printf("total no. of 'e''s present are %d", count);

	_getch();
	return 0;
}