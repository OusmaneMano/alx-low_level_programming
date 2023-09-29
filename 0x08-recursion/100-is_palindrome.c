#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_rec(char *s);

/**
 * is_palindrome - palindrome
 * @s: input
 * Return: 1 if palidrome otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_rec(s)));
}

/**
 * _strlen_rec - return the length
 * @s: string to calulate
 * Return: length
 */

int _strlen_rec(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 +  _strlen_rec(s + 1));
}

/**
 * check_pal - check the character recursively
 * @s: string to check
 * @i: iteration
 * @len: length
 * Return: 1 or 0
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}

