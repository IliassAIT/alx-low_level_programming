#include "3-calc.h"
/**
 * main - Entry point
 * Return: return (0) success
 */
int main(int argc, char **argv)
{
if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
{	printf("Error\n");
	exit(100);
}
if (!((get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]))))
{
	printf("Error\n");
	exit(99);
}
printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), (atoi(argv[3]))));
return (0);
}
