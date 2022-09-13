#include <stdio.h>

/**
 * main - Reverse alphabet
 *
 * Return: Always (Succesful)
 */
int main (void)
{ 
	char c;
	for (c = 'z'; c >='a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);

}
