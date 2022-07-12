#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct convert - Entry point
 * Description: Defines a structure for symbols and functions
 * @sym: The operator
 * @f: The function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;


int _putchar(char);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/** Helper Functions */
unsigned int base_len(unsigned int num, int base);
char *rev_string(char *s);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_int(unsigned int);

#endif /*MAIN_H_*/
