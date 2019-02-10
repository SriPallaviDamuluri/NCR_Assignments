#include<iostream>
using namespace std;

int main()
{
	int num, rem, sum = 0;
	cin >> num;
	while (num > 0)
	{
		rem = num % 10;
		num = num / 10;
		sum = sum + rem;
	}
	cout << sum;
	system("pause");
	return 0;
}