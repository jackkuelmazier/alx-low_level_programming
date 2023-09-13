#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples two numbers
 * @a: first integer
 * @b: second integer
 * Return: quotient
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first integer
 * @b: second integer
 * Return: qoutient
 */
int op_div(int a, int b)
{
	return ( a / b);
}

/**
 * op_mod - modulates two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
