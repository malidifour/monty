#include "monty.h"
#include <stdio.h>

/**
 *pall - prints all values starting from the top of the stack
 *@stack: pointer to the top of the stack
 *@line_number: the line number of the command being run
 *
 * Return: void
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
stack_t *tab = *stack;

while (tab)
{
printf("%d\n", tab->n);
tab = tab->next;
}
}
