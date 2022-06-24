#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void file_exec(FILE *fp)
{
char *line = NULL;
size_t line_size;
ssize_t len;
char *opcode = NULL, *op_code_arg = NULL;
size_t line_number = 0;
int int_op_code_arg;
stack_t *stack = NULL;

/* read a line */
while ((len = getline(&line, &line_size, fp)) != -1)
{
line[len - 1] = '\0';
line_number += 1 ;

op_code = strtok(line, " ");
op_code_arg = strtok(NULL, " ");

/* find the opcode handler */
if (strcmp(op_code, "push") == 0)
{
/*check if arg is an int */
if (op_code arg == NULL || !is_numeric(op_code arg))
{
fprintf(stderr, "L%d: usage: push integer\n",line_number);
exit(EXIT_FAILURE);
}
int_op_code_arg = atoi (op_code_arg);
push(&stack, int_op_code_arg);
continue;
}

if (strcmp(op_code, "pall") == 0)
op_pall(&stack, line_number);

else if (strcmp(op_code, "pint") == 0)
op_pint(&stack, line_number);
}

