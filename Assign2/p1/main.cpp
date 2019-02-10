#include <iostream>
#include<cmath>
using namespace std;
void bintodeci(long int);
void decitobin(int);
int main() {

	long int binary;
	int deci;
	cin >> binary >> deci;
	bintodeci(binary);
	decitobin(deci);
	system("pause");
	return 0;
}
void bintodeci(long int b)
{
	int i = 0, finald = 0, rem = 0;
	while (b>0)
	{
		rem = b % 10;
		b = b / 10;
		finald = finald + rem*pow(2, i);
		i++;
	}

	cout << "decimal conversion of given binary is" << finald;

}

void decitobin(int d)
{
	long int finalb = 0;
	int rem = 0, i = 1;
	while (d>0)
	{
		rem = d % 2;
		d = d / 2;
		finalb = finalb + rem*i;
		i = i * 10;
	}

	cout << "binary conversion of given decimal is" << finalb;

}


