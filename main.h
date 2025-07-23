#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_specifier - Structure format specifiers
 * @specifier: caracter that identifies the format
 * @func: function pointer to the function that handles the format
 */

typedef struct format_specifier
{
	char specifier;
	int (*func)(va_list);
} format_specifier_t;
format_specifier_t *get_formats(void);

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);


#endif /* MAIN_H */
