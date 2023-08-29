#include "main.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: return (0) success
 */
char *_binary(long long unsigned int n)
{
char *result;
int size;
size = (int)log2(n) + 1;
result = calloc(size, sizeof(char));
if (!result)
{
	free(result);
	return (0);
}
while (n > 0)
{
result[size - 1] = (n % 2) + '0';
n = n / 2;
size--;
}
return(result);
}
/*
while (n > 0)
{
binary = binary * 10;
binary = binary + (n % 2);
n = n / 2;
}
while (binary > 0)
{
i = i * 10;
i = i + (binary % 10);
binary /= 10;
}
i = i / 10;
return (i);
}
*/
