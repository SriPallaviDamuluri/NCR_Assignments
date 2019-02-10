#include<iostream>
using namespace std;

int main()
{
	int i, j, k, n;
	cout << "enter n value:";
	cin >> n;
	for (i = 1; i < n+1; i++)
	{
		for (j = 1; j < (2 * n - 1); )
		{
			k = n;
			while (k > 0)
			{
				if (k <= i)
				{
					cout<<k;
				}
				else
				{
					cout<<" ";
				}
				k--;
				j++;
			}

			k = 2;
			while (k <= n)
			{
				if (k <= i)
				{
					cout<<k;
				}
				else
				{
					cout << " ";
				}
				k++;
				j++;
			}

	 	}
		cout << endl;
	}

	system("pause");
	return 0;
}