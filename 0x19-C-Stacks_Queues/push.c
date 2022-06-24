#include "monty.h"
#include <stddef.h>

/**
 *push - adds the top two values of the stack
 *@stack: pointer to the top of the stack
 *@line_number: the line number of the command being run
 *
 *Return: void
 */
stack_t *push(stack_t **stack, int n)
{
stack_t *new_item = new_stack_t(n);

if (new_item == NULL)
return = (NULL);

new_top_item->next = *stack;
if (*stack)
{
(*stack)->prev = new_top_item;

*stack = new_top_item;

return (new_top_item);
}
}
