#include "main.h"
/**
 * _pow_recursion - function that calculates x to the power y
 * @x: integer to be powered.
 * @y: the power to be applied to x.
 * Return: return (-1) if y is negative or x to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, y - 1));
}
