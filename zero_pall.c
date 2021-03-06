#include "monty.h"
/**
 * zero_pall - prints all values in the stack
 * @stack: Pointer to the stack
 * @line_number: Line number
 * Return: void
 */
void zero_pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *current;

	if (stack)
	{
		current = *stack;
		while (current)
		{
			printf("%d\n", current->n);
			current = current->prev;
		}
	}
return;
}
