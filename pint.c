#include "monty.h"
/**
 *one_pint - print value at top of stack
 *@stack: stack
 *@linenum: line number
 *
 */
void one_pint(stack_t **stack, unsigned int linenum)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", linenum);
		freedom(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
