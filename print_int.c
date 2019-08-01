#include "holberton.h"

/**
 * print_int - print integer
 * @n: decimal number
 * @len: lenght
 *
 * Return: counter
 */

int print_int(int n, int len)
{
	/* int i = 0; */

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		len++;
	}
	if (n != 0)
	{
		len++;
		print_int(n / 10, len);
		_putchar((n % 10) + '0');
	}

	return (len);
}
