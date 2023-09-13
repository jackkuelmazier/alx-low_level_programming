#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - returns a pointer to the function
 * that corresponds to the operator given as a parameter
 * @s: string
 * Return: function pointer
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

    while (i < 5)
    {
	    if (s && s[0] == ops[i].op[0] && !s[1])
		    return (ops[i].f);
	    i++;
    }
    return (NULL);
}
