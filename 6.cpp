#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a, counter, sum, prev_sum;

	prev_sum = 0;
	sum = 0;
	cout << "Enter a number: "; cin >> a;

	while(a>0)
	{
		prev_sum = 0;
		sum = 0;
		for (counter = 1; counter <= a; counter++)
		{
			sum = prev_sum + counter;
			prev_sum = sum;
		}
		cout << "The sum of all whole numbers from 1 to " << a << " is " <<sum << endl;
		cout << "Enter a number: "; cin >> a;
	}
	cout << "Thank you!" << endl;

	_getch();
	return 0;
}