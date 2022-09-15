nclude <stdio.h>

#include <stdlib.h>
/**
 *
 * main - main block
 *
 * Description: computes and prints the sum of all the multiples of 3 or
 *
 * 5 below 1024 (excluded), followed by a new line
 *
 * Return: 0
 *
 */
int main(void)
{
	int f = 0;
	int sum = 0;

	while (f < 1024)
	{
		if (f % 3 == 0 || f % 5 == 0)
		{
			sum += f;
		}

		f++;
	}
	printf("%i\n", sum);
	return (0);
}
