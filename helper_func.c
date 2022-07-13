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

	for (i = 0; num > 0; i++)
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
	buff *dest;
	char tmp;

	while (s[len] != '\0')
		len++;
	dest = malloc(sizeof(buff) * len + 1);
	if (dest == NULL)
		return (NULL);
	_memcpy(dest, s, len);
	for (i = 0; i < len; i++, len--)
	{
		tmp = dest->buffer[len - 1];
		dest->buffer[len - 1] = dest->buffer[i];
		dest->buffer[i] = tmp;
	}
	return (s);
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

unsigned int _memcpy(buff *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest->buffer) = *(src + i);
		(dest->len)++;

		if (dest->len == 1024)
		{
			write(1, dest->start, dest->len);
			dest->buffer = dest->start;
			dest->len = 0;
		}
		else
			(dest->buffer)++;
	}
	return (n);
}

/**
 * free_buff - frees memory space for buff
 * @dest: buff struct to b free
 */

void free_buff(buff *dest)
{
	free(dest->start);
	free(dest);
}

/**
 * init_buffer - initializes a variable of struct type buff
 * Return: pointer to initialised buff
 */

buff *init_buffer(void)
{
	buff *dest;

	dest = malloc(sizeof(buff));
	if (dest == NULL)
		return (NULL);
	dest->buffer = malloc(sizeof(char) * 1024);
	if (dest->buffer == NULL)
	{
		free(dest);
		return (NULL);
	}
	dest->start = dest->buffer;
	dest->len = 0;

	return (dest);
}
