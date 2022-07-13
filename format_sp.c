#include "main.h"

/**
 * print_char - Entry point
 *
 * @list: list of arguments
 *
 * Description: Prints character to std out
 *
 * Return: Amount of characters printed.
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Entry point
 *
 * @list: list of arguments
 *
 * Description:  Prints a string to stdout
 *
 * Return: Amount of characters printed.
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Entry point
 *
 * @list: list of arguments
 *
 * Description: Prints the percent symbol to std out
 *
 * Return: Amount of characters printed.
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - Entry Point
 *
 * @list: list of arguments
 *
 * Description: Prints an integer
 *
 * Return: Amount of characters printed.
 */

int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * unsigned_integer - prints Unsigned integers
 * @list: List of all of the arguments
 * Return: number count
 */

int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsigned_int(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_int(num));
}
