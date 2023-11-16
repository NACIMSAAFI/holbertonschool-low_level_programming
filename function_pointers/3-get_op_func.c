#include "3-calc.h"

/**
 * get_op_func - function that selects the correct
 * function to perform the operation asked by the user.
 * @s: The operator as a string.
 *
 * Return: A function pointer to the corresponding operation function.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	if (s == NULL)
		return (NULL);

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
