#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings -> Prints Strings, followed by a new line.
 *
 * @separator: Input Separator
 * @n: Input Strings Number
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *cara;
va_list argv;

va_start(argv, n);
for (i = 0; i < n; i++)
{
cara = va_arg(argv, char*);
if (cara == NULL)
{
printf("(nil)");
}
else
{
printf("%s", cara);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
putchar('\n');
va_end(argv);
}
