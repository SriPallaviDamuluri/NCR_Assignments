#include<iostream>
using namespace std;

int main()
{
	int r1, r2,i,j,count;
	cin >> r1 >> r2;

	for (i = r1; i <= r2; i++)
	{
		count = 0;
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				count++;
				break;
			}

		}
		if (i == 1)
		{
			count++;
		}
		if (count == 0)
		{
			cout << i << endl;
		}
		
		

	}
	system("pause");
	return 0;
}