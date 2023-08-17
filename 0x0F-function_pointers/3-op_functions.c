#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns products of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The products a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns remainders of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
