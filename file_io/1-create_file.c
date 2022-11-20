#include "main.h"
#include <string.h>

/**
 * create_file - Writes chars in 'text_content'
 * (except the REQUIRED terminating NULL byte)
 * into file named 'filename'.
 *
 * If the file doesn't exist, create_file creates
 * it with rw------- permissions.
 *
 * If the file does exist, it leaves the permissions
 * as they are.
 *
 * If 'filename' is NULL or empty, return -1
 *
 * If text_content is empty or NULL,
 * just create an empty file and return 1.
 *
 * If anything else goes wrong, return -1.
 *
 * @filename: name of file to be created
 * @text_content: null-terminating string to write into
 * 'filename' (excluding the null byte)
 *
 * Return: 1 if successful otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL || *filename == '\0')
		return (-1);

	if (text_content)
	{
		int text_content_len = strlen(text_content);
		int successfully_written_bytes = 0;

		fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
		successfully_written_bytes = write(fd, text_content, text_content_len);
		close(fd);

		return (1 ? successfully_written_bytes == text_content_len : -1);
	}

	return (1);
}

