#include<iostream>
using namespace std;
int main()
{
	int c;
	cout << "Enter Celsius tempereture : ";
	cin  >>  c;
	cout << "Fahrenheit = " << (1.8 * c) + 32 << endl;
	cout << "Now weather in thai is " << (((1.8 * c) + 32) >= 70 ? " HOT "  : " COOL ");
	cout << endl;

	return(0);
}
