#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: return (0) success or (1) if failure.
 */
int main(int argc, char *argv[])
{
int i, j, sum;
for (i = 1; i < argc; i++)
{
	for (j = 0; j < argv[i][j]; j++)
	{
	if (argv[i][j] < 48 || argv[i][j] > 57)
	{
	printf("Error\n");
	return (1);
	}
	}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
