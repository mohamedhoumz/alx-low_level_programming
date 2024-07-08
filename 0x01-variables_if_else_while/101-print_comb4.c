#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three different digits
 * Numbers must be separated by ", ", followed by a space
 * Numbers should be printed in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds, tens, ones;

	hundreds = 0;
	while (hundreds <= 7)
	{
		tens = hundreds + 1;
		while (tens <= 8)
		{
			ones = tens + 1;
			while (ones <= 9)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hundreds < 7 || tens < 8 || ones < 9)
				{
					putchar(',');
					putchar(' ');
				}
				ones++;
			}
			tens++;
		}
		hundreds++;
	}
	putchar('\n');

	return (0);
}

