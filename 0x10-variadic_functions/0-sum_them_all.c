#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -> Function that returns the sum of all its parameters.
 *
 * @n: Input Number
 *
 * Return: Depennd Condition
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int s = 0;
va_list arge;
va_start(arge, n);

if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
s += va_arg(arge, int);
}

return (s);
}
