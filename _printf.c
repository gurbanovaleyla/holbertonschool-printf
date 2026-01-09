#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed, or -1 on error
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
		if (format[i] != '%')
		{
			count += write(1, &format[i], 1);
		}
		else
		{
			i++;
			if (format[i] == '\0')  /* lone % at the end */
			{
				va_end(args);
				return (-1);
			}
			if (format[i] == 'c')
				count += print_c_
