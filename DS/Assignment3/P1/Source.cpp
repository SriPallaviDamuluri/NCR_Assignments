#include<iostream>
using namespace std;
void bubblesort(int a[10], int n);

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
	bubblesort(a, n);
	system("Pause");
	return 0;

}
void bubblesort(int a[10], int n)
{
	int i, j,temp;
	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
