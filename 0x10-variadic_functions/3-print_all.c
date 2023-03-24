#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	int a, cont = 0;
	char *p;
	va_list valist;

	va_start(valist, format);
	while (format && format[cont] != '\0')
	{
		a = 1;
		switch (format[cont])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			p = va_arg(valist, char *);
			if (p == NULL)
			{
				p = "(nil)";
			}
			printf("%s", p);
			break;
		default:
			a = 0;
			break;
		}
		if (a && format[cont + 1] != '\0')
			printf(", ");
		cont++;
	}
	va_end(valist);
	printf("\n");
}
