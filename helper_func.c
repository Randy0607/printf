#include "main.h"
#include <stdio.h>

/**
 * base_len - calculates lenth of octal number
 * @num: number for which length is to be calculated
 * @base: Base to be calculated by
 * Return: length of octal number
 */

unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; i < num; i++)
		num = num / base;
	return (i);
}

/**
 * rev_string - reverses string
 * @s: string to reverse
 * Return: A pointer to a character
 */

char *rev_string(char *s)
{
	int i, len = 0;
	char *ptr;
	char tmp;

	while (s[len] != '\0')
		len++;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	_memcpy(ptr, s, len);
	for (i = 0; i < len; i++, len--)
	{
		tmp = ptr[len - 1];
		ptr[len - 1] = ptr[i];
		ptr[i] = tmp;
	}
	return (ptr);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 * Return: void
 */

void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * _memcpy - copy memory area
 * @dest: destination pointer for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
