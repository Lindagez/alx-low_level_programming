#include <stdio.h>

/**
 * main - print comb4.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				printf((digit1 % 10) + '0');
				printf((digit2 % 10) + '0');
				printf((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				
				printf(',');
				printf(' ');
			}
		}
	}

	printf('\n');

	return (0);
}
