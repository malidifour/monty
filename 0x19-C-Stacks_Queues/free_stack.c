#include "monty.h"
#include <stddef.h>

void free stack_t(stack_t **stack);
{
stack_t *deleted_item = NULL;

while (*stack)
{
deleted_item = *stack;
*stack = (*stack)->next;
deleted(deleted_item);



