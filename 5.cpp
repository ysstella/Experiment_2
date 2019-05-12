#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int counter, prev_number, current_number, a, b, z;
	prev_number = 0;
	current_number = 1;
	cout << prev_number << "," ;
	cout << current_number << "," ;

	for (counter = 0; counter < 20; counter++)
	{
	a = prev_number;
	b = current_number;
	z = a + b;

	if (counter >= 19)
		cout << z;
	else
		cout << z << ",";
	current_number=z;
	prev_number=b;
	}
		_getch();
		return 0;
}