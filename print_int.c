#include "main.h"

/**
 * print_int - prints integer
 * @arg: list of arguments
 * Return: int
 */

int print_int(va_list arg)
{
	int i, len, div;
	unsigned int num;

	i = va_arg(arg, int);
	div = 1;
	len = 0;

	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
		num = i;
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

/**
 * print_unsigned_int - prints unsigned int
 * @n: unsigned int
 * Return: int
 */

int print_unsigned_int(unsigned int n)
{
	int div = 1, len = 0;
	unsigned int num;

	num = n;
	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
