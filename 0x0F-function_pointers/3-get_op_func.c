#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selecs the rifght op
 *@s: the operator
 * Return:pointer to right func or NULL
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
	int i = 0;
	
	while (*s != *(ops[i].op) && ops[i].op != NULL)
		i++;


	return (ops[i].f);
}
