#include<iostream>
using namespace std;

int main()
{
	float basic,tsal;
	cout << "Enter Salary";
	cin >> basic;
	if (basic >= 1 && basic <= 4000)
	{
		tsal = 0.1*basic + 0.5*basic + basic;
	}
	else if (basic >= 4001 && basic <= 8000)
	{
		tsal = 0.2*basic + 0.6*basic + basic;
	}
	else if (basic >= 8001 && basic <= 12000)
	{
		tsal = 0.25*basic + 0.7*basic + basic;
	}
	else if (basic >= 12000)
	{
		tsal = 0.3*basic + 0.8*basic + basic;
	}
	cout << "Gross Salary:" << tsal;
	system("pause");
	return 0;
}