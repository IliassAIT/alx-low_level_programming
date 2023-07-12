#include <stdio.h>
/**
 * main - Entry point
 * Return: return (0) success
 */
int main(int ac, char av[])
{
int i;
for (i = 0; i < --ac; i++)
{
	av[i] = 'i';
}
printf("%s\n", av);
return (0);
}
