#include "main.h"

/**
 * ch - prints out a character
 * @character: character to be printed
 * Return: number of characters
 */

int ch(va_list character)
{
	_putchar(va_arg(character, int));
	return (1);
}

/**
 * str - prints string to stdout
 * @string: list
 * Return: number of characters printed
 */

int str(va_list string)
{
	int len;
	char *str;

	str = va_arg(string, char *);
	if (str == NULL)
		str = "(null)";
	len = 0;

	while (str[len] != '\0')
		len += _putchar(str[len]);
	return (len);
}

/**
 * _int - prints integer
 * @integ: int to be printed
 * Return: number of characters printed
 */

int _int(va_list integ)
{
	int len;

	len = print_int(integ);
	return (len);
}

/**
 * _ui - prints unsigned int
 * @unsign: list of unsigned ints
 * Return: num count
 */

int _ui(va_list unsign)
{
	unsigned int num;

	num = va_arg(num, unsigned int);
	if (num == 0)
		return (print_unsigned_int(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_int(num));
}

/**
 * _percent - prints percentage symbol
 * @sym: list of arguments
 * Return: number of characters printed
 */

int _percent(__attribute__((unused))va_list sym)
{
	_putchar('%');
	return (1);
}
