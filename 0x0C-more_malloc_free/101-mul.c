#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int find_len(char *str);
char *create_xarray(int size);
char iterate_zeros(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find-len - find the length of th string
 * @str: string to be measured
 * Return: the length of the string
 */

int find_len(char *str)
{
	int i = 0;

	while (*str++)
		i++;

	return (i);
}
/**
 * create_xarray - create s an array of chars
 * @size: size of string
 * Description: if there is no space, the fonstion exists and print 98
 * Return: pointer to the array
 */

char *create_xarray(int size)
{
	int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';

	array[i] = '\0';

	return (array);
}
/**
 * iterate_zeroes - iterates through string of number containing leading
 *			zeroes until it hits a npon-zero element
 * @str: string number to be iterate
 * Return: A pointer to the next non-zero element
 */
char iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (*str);
}
/**
 * get_prod - multiples a string of number by a string digit
 * @prod: buffer to store the result
 * @mult: string of number
 * @digit: simple digit
 * @zeroes: necessary numbers of leading zero
 * Description: if mult contains a non-digit, the fonction exit
 *		and print 98
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (num % 10) + '0';
}
/**
 * add_nums - adds the numbers stored in tawo strings
 * final_prod: buffer to store the final product
 * next_prod: next product to be stored
 * next_len: length of next product
 * Return: ...
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod) + 1)
		final_prod++;

	while (*(next_prod) + 1)
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}
	
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}
/**
 * main - multiples two positive number
 * @argc: number of argument
 * @argv: array of argument
 * Description: if number of argument is incorrect or one of the number
 *		contains a non-digit, the fonction exit and print 0
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int i, digit, size, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[1]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (i = find_len(argv[2]) - 1; i >= 0; i--)
	{
		digit = get_digit(*(argv[2] + i));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}

