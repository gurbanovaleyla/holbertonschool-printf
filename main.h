#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...);

/* helper functions */
int print_char(char c);
int print_string(char *s);
int print_percent(void);

#endif /* MAIN_H */
