#include<iostream>
using namespace std;

int main()
{
	int num, rem = 0, rev = 0,temp;
	cin >> num;
	temp = num;
	while (num > 0)
	{
		rem = num % 10;
		num = num / 10;
		rev = rev * 10 + rem;

	}

	if (rev == temp)
	{
		cout << "Palindrome";

	}
	else
		cout << "Not a Palindrome";


	system("pause");
	return 0;
}