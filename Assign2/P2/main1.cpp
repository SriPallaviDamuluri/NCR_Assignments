#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
long int bintodeci(long int b);
void decitohex(int d);
void hextobinary(char hex[100]);
int main()
{
	char hex[100]="F5";
	int  binary;
	int deci;
	cin >> binary;
	deci=bintodeci(binary);
	decitohex(deci);
	hextobinary(hex);

	system("pause");
}
long int bintodeci(long int b)
{
	int i = 0, rem = 0;
	long int finald = 0;
	while (b > 0)
	{
		rem = b % 10;
		b = b / 10;
		finald = finald + rem*pow(2, i);
		i++;
	}
	return finald;
}
void decitohex(int d)
{
	char h[100];
	int rem,i=0;
	while (d > 0)
	{
		
		rem = d % 16;
		d = d / 16;
		h[i] = rem < 10 ? rem + '0' : rem - 10 + 'A';
		i++;
	}
	h[i] = '\0';
	
	puts(_strrev(h));


}
void hextobinary(char hex[100])
{
	int i = 0;
	while (hex[i])
	{
		switch (hex[i])
		{

		case '0': cout << 0000; break;
		case '1': cout << 0001; break;
		case '2': cout << 0010; break;
		case '3': cout << 0011; break;
		case '4': cout << 0100; break;
		case '5': cout << 0101; break;
		case '6': cout << 0110; break;
		case '7': cout << 0111; break;
		case '8': cout << 1000; break;
		case '9': cout << 1001; break;
		case 'A':
		case 'a': cout << 1010; break;
		case 'B': 
		case 'b': cout << 1011; break;
		case 'C':
		case 'c': cout << 1100; break;
		case 'D':
		case 'd': cout << 1101; break;
		case 'E':
		case 'e': cout << 1110; break;
		case 'F':
		case 'f': cout << 1111; break;
		default:  cout << "Enter valid hexadecimal value";break;
		}
		i++;
	}
}