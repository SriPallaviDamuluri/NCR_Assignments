#include<iostream>
using namespace std;

int main()
{
	int num, binary[5], rem,i=4;
	cout << "enter number within range 0-32";
	cin >> num;

	while (num > 0)
	{
		rem = num % 2;
		binary[i] = rem;
		num = num / 2;
		i--;

	}

	while (i>0)
	{
		binary[i] = 0;
		i--;
	}
	binary[0] = 1;
	for (i = 0; i < 5; i++)
	{
		cout << binary[i];
	}
	





	system("pause");
	return 0;
}