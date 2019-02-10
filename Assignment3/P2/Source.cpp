#include<iostream>
using namespace std;
int search(int pos,int arr[10],int n);

int main()
{
	int a[10], i,j,n,k,temp;
	cout << "enter size";
	cin >> n;

		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (i = 0, j = i; i < n;i++,j++)
		{
			if (a[i] < 0)
			{
				
				continue;
			}
			else
			{
				k=search(j,a,n);
				temp = a[i];
				a[i] = a[k];
				a[k] = temp;
			
			}

		}

		cout << "\n";
		for (i = 0; i < n; i++)
		{
			cout << a[i] << endl;
		}

		system("pause");
		return 0;

}
int search(int pos,int arr[10],int n)
{
	int i;
	for (i = pos + 1; i < n; i++)
	{
		if (arr[i] < 0)
		{
			return i;
		}
		
	}
	return pos;
}
