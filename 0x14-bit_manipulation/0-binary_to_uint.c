#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint
 * char string
 * return
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int T,P;
	int L;
		if (b == NULL)
			return (0);
	for (L = 0; b[L]; L++)
	{
		if (b[L] != '0' && b[L] != '1')
			return (0);
	}
	for  (P = 1, T = 0, L--; L >= 0; L--, P *= 2)
	{
		if (b[L] == '1')
			T += P;
	}
	return (T);
}
