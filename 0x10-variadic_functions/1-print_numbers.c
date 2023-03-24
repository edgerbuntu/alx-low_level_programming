#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(valist, int));
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(valist, int));
				break;
			}
			printf("%d%s", va_arg(valist, int), separator);
		}
	}
	va_end(valist);
	printf("\n");
}
