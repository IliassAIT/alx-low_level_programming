#include "3-calc.h"
/**
 * get_op_func - function selecter
 * @s: a pointer to the string of the selected op
 * Return: pointer to the selected op or (NULL)
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
int flag;
flag = 0;
while (flag < 5)
{
	if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);
	i++;
	}
return (NULL);
}
