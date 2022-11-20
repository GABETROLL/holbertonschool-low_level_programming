#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends the string 'text_content'
 * (excluding the ending NULL byte)
 * into the file named 'filename'.
 *
 * If 'filename' is NULL or if the file doesn't
 * exist, return -1.
 *
 * If 'text_content' is NULL, just append nothing.
 *
 * If appending 'text_content' fails, return -1.
 *
 * @filename: name of the file to append to.
 * If file doesn't exist, return -1.
 *
 * @text_content: text to append to 'filename'
 * if it's NULL, it's considered "".
 *
 * Return: 1 if writing to the file is successful
 * otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int success = 0;
	int text_content_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content == NULL)
		return (1);

	text_content_len = strlen(text_content);

	success = write(fd, text_content, text_content_len);
	close(fd);

	if (success == text_content_len)
		return (1);
	return (-1);
}

