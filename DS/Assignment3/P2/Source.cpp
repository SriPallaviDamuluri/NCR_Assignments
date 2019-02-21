#include<iostream>
using namespace std;
void selectionsort(int a[10], int n);

int main()
{
	int a[10], i, n;
	cout << "Enter size" << endl;
	cin >> n;
	cout << "Enter elements:" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	selectionsort(a, n);
	system("Pause");
	return 0;

}
void selectionsort(int a[10], int n)
{
	int i, j, temp;
	for (i = 0; i <= n-1; i++)
	{
		for (j = i+1; j <= n-1 ; j++)
		{
			if (a[j] < a[i])
			{

				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
