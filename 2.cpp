#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	double a, b;
	cout << "Please input the unpayed balance: "; cin >> a;
	cout << "Please input the gallon reading: "; cin >> b;

	if (a > 0)
	{
		cout << "You have unpayed balance, thus P20 late charge is assessed" << endl;
		cout << "Your water bill is: " << 1.10*b + 55 << endl;
	}
	else
	{
		cout << "You do not have unpayed balance,  thus non late charge is assessed" << endl;
		cout << "Your water bill is: " << 1.10*b + 35 << endl;
	}

	_getch();
	return 0;
}