#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
  * Return: 1  success, -1  failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_count, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		write_count = write(file, text_content, i);
		if (write_count == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
