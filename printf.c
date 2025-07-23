#include "main.h"

/**
 * handle_format - Handles the format specifier
 * @c: The format specifier character
 * @args: The variable argument list
 * Return: Number of characters printed for the format specifier
 */

int handle_format(char c, va_list args)
{
	format_specifier_t *formats = get_formats();
	int j;

	for (j = 0; formats[j].specifier; j++)
	{
		if (c == formats[j].specifier)
			return (formats[j].func(args));
	}
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}

/**
 * get_formats - returns the array of format specifiers
 * Return: pointer to static array
 */
format_specifier_t *get_formats(void)
{
	static format_specifier_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'%', print_percent},
		{'\0', NULL}
	};
	return (formats);
}

/**
 * _printf - Simplified printf function
 * @format: The format string
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (!format)
		return (-1);
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
			{
				va_end(args);
				return (-1);
			}
			count += handle_format(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
