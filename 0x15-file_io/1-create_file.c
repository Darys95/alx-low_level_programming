#include "main.h"

/**
 * create_file - For creating a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fl, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fl, text_content, length);

	if (fl == -1 || wr == -1)
		return (-1);

	close(fl);

	return (1);
}
