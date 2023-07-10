#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: content to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename,  char *text_content)
{
	int f, write_res, len;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		f = open(filename, O_WRONLY | O_APPEND);
		if (f == -1)
			return (-1);

		len = 0;
		while (*(text_content + len++))
			;
		len--;

		write_res = write(f, text_content, len);
		if (write_res == -1)
		{
			close(f);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}

	close(f);
	return (1);
}
