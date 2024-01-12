#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: return (0) success
 */
int main(int argc, char *argv[])
{
argc--;
printf("%s\n", argv[argc]);
return (0);
}
