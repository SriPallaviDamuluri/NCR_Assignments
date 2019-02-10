#include<iostream>
using namespace std;

int main()
{
	int arr[10], i, n, sum,j,s=0,index1,index2;
	cout << "size:"<<endl;
	cin >> n;
	cout << "enter elements";

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "enter sum";
	cin >> sum;
	for (i = 0; i < n; i++)
	{
		s = arr[i];
		
		for (j = i+1; j < n; j++)
		{
			if(s < sum)
			{
				s = s + arr[j];
			}
			else if (s == sum)
			{
				index1 = i;
				index2 = j;
				break;
			}
			else
				break;

		}
		if (s == sum)
		{
			break;
		}

	}
	if (s != sum)
	{
		cout << "subarray not found";
	}
	else
		cout << "sum found at indexes" << index1 << " and" << index2-1;

	system("pause");
	return 0;

}