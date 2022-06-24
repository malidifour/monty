#include "monty.h"
#include <stdio.h>
#include <stdlib>


/**
* check_open - validate if the argument represent a file or not
* @argc: Counter of arguments
* @argv: Pointer with the reference to arguments
**/

FILE *check_open(int argc, char **argv)
{
FILE *fp = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
fp = fopen(argv[1], "r");
if (fp == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

/* execute bytecode */
file_exec(fp);

/* close the file */
fclose(fp);

return (0);
}
