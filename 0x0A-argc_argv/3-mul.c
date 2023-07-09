#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: return (0) success.
 *	   return (1) failure.
 */
int main(int argc, char *argv[])
{
int a, b, c;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a * b;
printf("%d\n", c);
return (0);
}
