#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: name of the file to read
 * @letters: number of letters
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenR, lenW;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	lenR = read(file_d, buffer, letters);
	close(file_d);
	if (lenR == -1)
	{
		free(buffer);
		return (0);
	}
	lenW = write(STDOUT_FILENO, buffer, lenR);
		free(buffer);
		if (lenR != lenW)
			return (0);
		return (lenW);
}

