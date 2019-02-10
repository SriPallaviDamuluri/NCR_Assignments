#include<iostream>;
using namespace std;

int main()
{
	long int number,count=0,rem;
	cin >> number;
	while (number > 0)
	{
		rem = number % 10;
		if (rem == 1)
			count++;
		number = number / 10;
	}
	cout << " number of bits as '1'=" << count;
	system("pause");
	return 0;


}
