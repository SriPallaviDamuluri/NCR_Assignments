#include<iostream>;
using namespace std;
#include<math.h>;

int main()
{
	float amt=500000,r=3.5/100,si;
	cout << "Simple Interest at rateof 10% for 10yrs:" << amt*0.1 * 10;
	cout << "Compund Interest at rate of 10% compounded anually " << amt*pow((1 + r), 10);
	cout << "Compund Interest at rate of 10% compounded semi-anually " << amt*pow((1+(2*r)), 5);
	cout << "Compund Interest at rate of 10% compounded anually " << amt*pow((1 + (4*r)), (10/4));
	cout << "Compund Interest at rate of 10% compounded anually " << amt*pow((1 + 12*r), (10/12));
	cout << "Compund Interest at rate of 10% compounded anually " << amt*pow((1 + 60*r), (10/60));

	system("pause");
	return 0;
}