#include<iostream>
#include<math.h>
using namespace std;
int rotate_right(int n, int b);

int main()
{
	int num, pos,res;
	cout << "Enter an integer and number of positions to be rotated:";
	cin >> num >> pos;
res=rotate_right(num, pos);
cout << "number after rotation:" << res;
	
    system("pause");
	return 0;
}
int rotate_right(int n, int b)
{
	int rem, result=0, i,j,k,num=n;
	i = 0;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	j = 0;
	while (n > 0)
	{
		k = j + b;
		if (k >= i)
		{
			k = j + b - i;
		}
		rem = n % 10;
		result = result + rem*pow(10, k);
		n = n / 10;
		j++;
	}
	return result;

}