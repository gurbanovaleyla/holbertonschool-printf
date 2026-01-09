#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: number of characters printed
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 * @s: string to print
 *
 * Return: number of characters printed
 */
int print_string(char *s)
{
	int i = 0;

	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	return (write(1, s, i));
}

/**
 * print_percent - prints percent sign
 *
 * Return: number of characters printed
 */
int print_percent(void)
{
	return (write(1, "%", 1));
}
