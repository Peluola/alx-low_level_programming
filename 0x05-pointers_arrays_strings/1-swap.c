/**
 * swap_int - swaps two integer values
 * @: first integer
 * @b: second ineteger
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;

}
