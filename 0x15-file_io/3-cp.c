#include "main.h"

void print_error(int err, char *filename);
void cp(char *file_from, char *file_to);

/**
 * main - Copies the content of a file to another file
 *
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		print_error(97, NULL);

	cp(*(argv + 1), *(argv + 2));
	return (0);
}

/**
 * print_error - print file errors
 *
 * @err: error code
 * @filename: file name
 *
 * Return: Nothing
 */
void print_error(int err, char *filename)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			break;
		default:
			break;
	}

	exit(err);
}

/**
 * cp - copies the content of file to another file
 *
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: Nothing
 */
void cp(char *file_from, char *file_to)
{
		int fs, fd, read_res, write_res;
		char *buffer[1024];

		fs = open(file_from, O_RDONLY);
		if (fs == -1)
			print_error(98, file_from);
		fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd == -1)
		{
			close(fs);
			print_error(99, file_to);
		}

		do {
			read_res = read(fs, buffer, 1024);
			if (read_res < 0)
				print_error(98, file_from);
			write_res = write(fd, buffer, read_res);
			if (write_res < read_res)
				print_error(99, file_to);
		} while (write_res == 1024);

		if (close(fs) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs);
			close(fd);
			exit(100);
		}
		if (close(fd) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
}
