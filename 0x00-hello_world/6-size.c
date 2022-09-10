#include <stdio.h>

/**
 * main - Inputs the size of many types
 *
 * Return: Always 0 (Succesful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d bytes(s)\n", sizeof(a));
	printf("Size of an int: %i bytes(s)\n", sizeof(b));
	printf("Size of a long int: %i bytes(s)\n", sizeof(c));
	printf("Size of long long int: %i bytes(s)\n", sizeof(d));
	printf("Size of a float: %i bytes(s)\n", sizeof(e));
	return (0);

