// Program to Count Number of Digits in given Number.

#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	long int n, c;
	cout << "\n Enter a Positive number ::: ";
	cin >> n;
	c = 0;
	while( n != 0 )
	{
		n = n / 10;
		c = c + 1;
	}
	cout << "\n The number of the digits is = " << c;
	getch();
}
/*
 Output:
 Enter a Positive number ::: 12345
 The number of the digits is = 5
 */
