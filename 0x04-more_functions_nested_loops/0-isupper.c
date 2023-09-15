#include <main.h>
/**
 * _isupper - check of uppercase
 * Description: use _putchar to print
 * @c: detect alphabet
 * Return: 1 is upper otherwise 0
 */

int _isupper(int c)
{
	char upper;

	for (upper = 'A'; upper <= "Z"; upper++)
	{
		if (c == upper)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
