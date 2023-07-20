#include "3-calc.h"
/**
 * main - function that operates 2 int by calling get_op_func
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Return (0) meaning success
 */
int main(int argc, char *argv[])
{
int (*used_func)(int, int);
if (argc < 4 || argc > 4)
{
printf("Error\n");
exit(98);
}
used_func = get_op_func(argv[2]);
if (used_func == NULL)
{
printf("Error\n");
exit(99);
}
if ((atoi(argv[3]) == 0) && (argv[2][0] == '%' || argv[2][0] == '/'))
{
printf("Error\n");
exit(100);
}
printf("%d\n", used_func(atoi(argv[1]), atoi(argv[3])));
return (0);
}
