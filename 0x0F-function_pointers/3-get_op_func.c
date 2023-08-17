#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - The correct function is to seleted to perform the operation asked by the user.
 * @s: The operator passes as argument.
 *
 * Return: A pointer to the funct corresponding
 *         to the operator given as an input.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
