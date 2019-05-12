#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int x, y;
	double z = 2.5;

		cout << setprecision(2) << fixed;
		cout << "Input the value of x: "; cin >> x;
		cout << "Input the value of y: "; cin >> y;

		switch (x)
		{
		case 1:
			if (1 < y && y < 5)
				cout << "The value of V is: " << setw(10) << x * y * z << fixed << endl;
			else if (y >= 5)
				cout << "The value of V is: " << setw(10) << x + y / z << setw(10) << endl;
			else
				cout << "The value of V is: " << setw(10) << x + y + z << setw(10) << endl;
			break;
		case 2:
			if (y <= 5)
				cout << "The value of V is: " << setw(10) << abs((x - y) / z) << endl;
			else
				cout << "The value of V is: " << setw(10) << x - sqrt(y + z) << endl;
			break;
		default:
			cout << "The value of v is: " << setw(10) << x + y + z << endl;
		}
	_getch();
	return 0;
}