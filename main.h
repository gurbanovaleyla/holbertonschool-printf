#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* _printf prototype */
int _printf(const char *format, ...);

/* Helper function prototypes */
int print_char(char c);
int print_string(char *s);
int print_percent(void);
int print_int(int n);

#endif /* MAIN_H */
