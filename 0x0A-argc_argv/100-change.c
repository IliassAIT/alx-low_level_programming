#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: return (0) success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int cent_types[] = {1, 2, 5, 10, 25};
int cash = atoi(argv[1]);
int i = 4, count = 0;
if (argc != 2)
{
	printf("Error\n");
	return (1);
}
if (cash < 0)
	printf("0\n");
else
{
while (i > 0)
{
if (cash < cent_types[i])
	i--;
count += cash / cent_types[i];
cash = cash % cent_types[i];
i--;
}
if (cash == 1)
	count++;
printf("%d\n", count);
}
return (0);
}
