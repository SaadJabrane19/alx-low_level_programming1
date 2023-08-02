#include <main.h>

/**
 * void_print_rev_recursion :Write a function that prints a string in reverse
 * @s : pointer to string
 * Return : void
 */

void _print_rev_recursion(char *s);
{
	if (*s > '\0')
	{
		print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
