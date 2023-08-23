#include "main.h"
#include <stdio.h>

int main()
{
	int len;

	len = _printf("%u", 1024);
	printf("length: %d\n", len);
	return (0);
}
