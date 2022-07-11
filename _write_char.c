#include "main.h"
#include <unistd.h>

/**
 * write_char - writes character to stdout
 * @c: character argument to be written
 * Return: 1(Success)
 */

int write_char(char c)
{
	return (write(1, &c, 1));
}
