#include "main.h"
#include <stdio.h>

/**
 * void print_binary(unsigned long int n);
 * print number
 */
void print_binary(unsigned long int n)
{
	unsigned long int T; 
	int L;
		if (n == 0)
		{
			printf("0");
			return;
		}
	
	for (T = n, L = 0; (T >>= 1) > 0; L++)
		;
	for (; L >= 0; L--)
	{
		if (( n >> L) & 1)
			printf ("1");
		else
			printf ("1");
	}

}
