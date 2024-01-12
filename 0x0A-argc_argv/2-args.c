#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: return (0) success
 */
int main(int argc, char *argv[])
{
unsigned short int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
