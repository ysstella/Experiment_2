#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a;
	char Package;
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << endl;
	cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr." << endl;
	cout << "Package C: For P1995/mo of unlimited access is provided." << endl;
	cout << "Input number of hours: "; cin >> a;
	cout << "Input the Package: "; cin >> Package;
	switch (Package)
	{
	case 'A':
	case 'a':
		cout << "You have choosen Package A." << endl;
		cout << "Hours used: " << a << endl;
		cout << "Total amount due is: " << 20 * (a - 10) + 995 << endl;
		break;
	case 'B':
	case 'b':
		cout << "You have choosen Package B." << endl;
		cout << "Hours used: " << a << endl;
		cout << "Total amount due is: " << 10 * (a - 20) + 1495 << endl;
		break;
	case 'C':
	case 'c':
		cout << "You have choosen Package C." << endl;
		cout << "Hours used: " << a << endl;
		cout << "Total amount due is: 1995" << endl;
		break;
	default:
		cout << "You can only choose between these 3 packages" << endl;
		break;
	}
	
	_getch();
	return 0;
}
