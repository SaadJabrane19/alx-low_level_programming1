#include <main.h>
/**
 * int _strlen_recursion Write a function that returns the length of a string
 *@s pointer to string
 *Return: void
*/

int _strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
	ntr += _strlen_recursion(s + 1) + 1;
}

return (ntr);
