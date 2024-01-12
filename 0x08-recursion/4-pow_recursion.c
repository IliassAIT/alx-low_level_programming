#include "main.h"
/**
 * _pow_recursion - function raise an int to the power of another
 * @x: first paramter int the be raised.
 * @y: second function parameter the power.
 * Return: return (-1) if the power is negative or x to the power of y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else
	return (_pow_recursion(x, y - 1) * x);
}
