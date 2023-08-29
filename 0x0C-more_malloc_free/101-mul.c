#include <stdio.h>
/**
 * main - Entry point
 * Return: return (0) success
 */
int main(int argc, char *argv[])
{
int i, j, flag;
flag = 0;
if (argc != 3)
{
	printf("Error\n");
	exit(98);
}
for (i = 0; argv[1][i] != '\0'; i++)
(
if(argv[1][i] < '0' || argv[1][i] > '9')
	flag = 1;
}
for (j = 0; argv[2][j] != '\0'; j++)
{
if(argv[2][j] < '0' || argv[2][j] > '9')
	flag = 1;
}
if (flag == 1)
{
	printf("Error\n");
	exit(98);
}

for (i = 0; i < len1; i++)
{
for (j = 0; j < len2; j++)
{

