#include<iostream>
#include<cstdlib>
#include"Header.h";
using namespace std;

int main()
{
	float x, y;
	cin >> x >> y;
	cout << add(x, y) << endl;
	cout << sub(x, y) << endl;
	cout << mul(x, y) << endl;
	cout << div(x, y);
	system("pause");
}