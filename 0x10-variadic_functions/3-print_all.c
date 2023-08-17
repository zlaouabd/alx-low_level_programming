#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
va_list args;
const char *format_ptr = format;
char c_arg;
int i_arg;
float f_arg;
char *s_arg;

va_start(args, format);

while (*format_ptr)
{
if (*format_ptr == 'c')
{
c_arg = (char)va_arg(args, int);
printf("%c", c_arg);
}
else if (*format_ptr == 'i'
{
i_arg = va_arg(args, int);
printf("%d", i_arg);
}
else if (*format_ptr == 'f')
{
f_arg = (float)va_arg(args, double);
printf("%f", f_arg);
}
else if (*format_ptr == 's')
{
s_arg = va_arg(args, char*);
if (s_arg == NULL)
printf("(nil)");
else
printf("%s", s_arg);
}
format_ptr++;
if (*format_ptr)
printf(", ");
}
printf("\n");
va_end(args);
}

