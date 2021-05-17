#include "get_next_line.h"

void	copies_memory(char *src, char *dest, int n, int term, int clean)
{
	while (*src && n--)
		*(dest++) = *(src++);
	if (term)
		*dest++ = '\0';
		if (clean)
			while(*dest)
				*dest++ = '\0';
}
