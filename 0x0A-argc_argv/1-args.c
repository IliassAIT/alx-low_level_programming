#include <stdio.h>
#include "main.h"
/**
 * main - Function that prints the number of used arguments
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: return (0) success.
 */
int main(int argc, char* argv[] __attribute__((__unused__)))
{
printf("%d\n", argc - 1);
return (0);
}
