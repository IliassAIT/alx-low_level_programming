#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * Return: return (0) success
 */
int main(void)
{
long long unsigned a;
char *n;
printf("enter number\n");
scanf("%lld", &a);
n = _binary(a);
printf("%llu = %s\n", a, n);
free(n);
return (0);
}
