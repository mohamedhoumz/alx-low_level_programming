#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two different digits
 * Numbers must be separated by ", ", followed by a space
 * Numbers should be printed in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, ones;

	tens = 0;
	while (tens <= 8)
	{
		ones = tens + 1;
		while (ones <= 9)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8 || ones < 9)
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		tens++;
	}
	putchar('\n');

	return (0);
}

