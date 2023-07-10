#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * or 0 if:
 *	+ the file can not be opened or read
 *	+ filename is NULL
 *	+ write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, read_res, write_res;
	char *buffer;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	read_res = read(f, buffer, letters);
	if (read_res == -1)
	{
		free(buffer);
		return (0);
	}

	write_res = write(STDOUT_FILENO, buffer, read_res);
	if (write_res == -1 || read_res != write_res)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(f);

	return (write_res);
}
