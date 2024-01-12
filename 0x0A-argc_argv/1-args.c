#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: return (0) success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
argc--;
printf("%d\n", argc);
return (0);
}
