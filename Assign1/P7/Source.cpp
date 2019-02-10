#include<iostream>
using namespace std;

int main()
{
	int i,num[50], count=0, avg, min, max,sum=0;
	cout << "enter numbers";
	cin >> num[0];
	min = num[0];
	max = num[0];

	for (i = 1; num[i - 1] > 0; i++)
	{
		
		count = count++;
		sum = sum+num[i-1];
		avg = sum / count;

		if (min > num[i-1])
		{
			min = num[i-1];
		}
		if (max < num[i-1])
		{
			max = num[i-1];
		}
		cin >> num[i];
	}
	cout << "no. of positive integers: " << count << endl;

	cout << "maximum: " << max << "  minimum: " << min << endl;
	cout << "Average: " << avg;




	system("pause");
	return 0;
}