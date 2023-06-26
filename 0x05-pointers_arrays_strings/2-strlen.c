#include <stdio.h>
#include <string.h>

void _puts(char *str)
{
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		putchar(str[i]);
	}
}

