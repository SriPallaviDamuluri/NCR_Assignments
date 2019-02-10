#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int num, n, rem, sum = 0;
		
	cin >> n;
	num = n;
	while (n > 0)
	{
		rem = n % 10;
		n = n / 10;
		sum = sum + pow(rem, 3);

	}
	if (sum == num)
	{
		cout << "armstrong";
	}
	else
		cout << "Not an armstrong";
	system("pause");
	return 0;


}