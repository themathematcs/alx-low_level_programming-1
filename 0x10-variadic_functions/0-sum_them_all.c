#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: number of parameters
* Return: the sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list ap;

	if (n != 0)
	{
		va_start(ap, n);
		while (n > 0)
		{
			sum += va_arg(ap, int);
			n--;
		}
		va_end(ap);

		return (sum);
	}
	return (n);
}
