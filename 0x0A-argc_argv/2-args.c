#include <stdio.h>
#include "main.h"
/**
 * main - func that prints the arguments received
 * @argc: Argument count
 * @argv: Argument vector
 * Return: return (0) success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
