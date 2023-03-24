#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *pl;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		pl = va_arg(valist, char *);
		if (pl == NULL)
			pl = "(nil)";
		if (separator == NULL)
			printf("%s", pl);
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s%s", pl, separator);
			else
			{
				printf("%s", pl);
			}
		}
	}
	va_end(valist);
	printf("\n");
}
