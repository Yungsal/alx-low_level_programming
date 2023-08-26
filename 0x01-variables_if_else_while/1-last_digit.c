#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnm = n % 10;

	if (lastnm > 5)
	{
		printf("Last digit of %d is %d and is greater than  5\n", n, lasnm);
	}
	else if (lastnm == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnm);
	}
	else if (lastnm < 6 && lastnm != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnm);
	}
	return (0);

}
