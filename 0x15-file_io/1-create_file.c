#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of new created file
 * @text_content: initial content of the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…) or filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int f, len;
	ssize_t write_res;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len++) != '\0')
			;

		write_res = write(f, text_content, len);
		if (write_res == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}

	close(f);

	return (1);
}
