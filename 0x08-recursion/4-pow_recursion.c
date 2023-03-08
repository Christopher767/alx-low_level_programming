#include "main.h"

/**
 * _pow_recursion - Returnns the value of x raised to the power of y
 * @x: the valuse to multiply
 * @y: the times tomultiply the value
 *
 * Return: the value multiplied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
