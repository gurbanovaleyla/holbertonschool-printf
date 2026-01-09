#include "main.h"

/**
 * print_char - prints a single character
 * @c: character to print
 * Return: number of characters printed
 */
int print_char(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 * @s: string to print
 * Return: number of characters printed
 */
int print_string(char *s)
{
    int count = 0;

    if (!s)
        s = "(null)";

    while (*s)
    {
        count += write(1, s, 1);
        s++;
    }

    return (count);
}

/**
 * print_percent - prints a percent sign
 * Return: number of characters printed
 */
int print_percent(void)
{
    return (write(1, "%", 1));
}

/**
 * print_int - prints an integer
 * @n: integer to print
 * Return: number of characters printed
 */
int print_int(int n)
{
    int count = 0;
    unsigned int num;

    if (n < 0)
    {
        count += write(1, "-", 1);
        num = -n;
    }
    else
        num = n;

    if (num / 10)
        count += print_int(num / 10);

    count += write(1, &"0123456789"[num % 10], 1);

    return (count);
}
