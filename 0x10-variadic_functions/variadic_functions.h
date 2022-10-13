#ifndef VARIADIC
#define VARIADIC

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct op - Struct op
 * @c: The data type (char)
 * @f: The function associated with it
 */

typedef struct op
{
	char c;
	void (*f)(va_list);
} op_t;


void print_all(const char * const format, ...);

#endif
