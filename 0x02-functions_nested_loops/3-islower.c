#include "main.h"

/**
 * _islower - dectect lowercase and uppercase
 *
 * Description: use _putchar to print
 * @c: collect alphabet
 *
 * Return: (1) if c is lower otherwise (0)
 *
 */
int _islower(int c)
{
	char 1;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		lower = 1;
		}
	}
	return (lower);
}
