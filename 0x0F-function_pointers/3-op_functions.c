#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: return the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of two numbers
 * @a: first number
 * @b: second number
 * Return: diffrence between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the produit of two numbers
 * @a: first number
 * @b: second number
 * Return: the produit of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

