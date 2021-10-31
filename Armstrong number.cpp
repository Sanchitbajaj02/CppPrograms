// Program to check whether the given number
// is Armstrong Number or Not.

#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int i, x, n, r, sum;
	cout << "\nEnter any Number ::: ";
	cin >> n;
	x = n;
	sum = 0;
	while( n != 0 )
	{
		r = n % 10;
		sum = sum + ( r * r * r );
		n = n / 10;
	}
	if( sum == x )
		cout << "\n Number " << j << " is a Amstrong Number.";
	else
		cout << "\n Number " << j << " is not a Amstrong Number.";
	getch();
}

/*
Output:
 Enter any Number ::: 153
 Number 153 is a Amstrong Number.
 */
