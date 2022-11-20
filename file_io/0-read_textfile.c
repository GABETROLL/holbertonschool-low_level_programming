#include "main.h"

/**
 * read_textfile - Prints the first
 * 'letters' letters of file 'filename'.
 *
 * @filename: name of the file to print,
 * relative to the executable's directory
 *
 * @letters: max amount of letters to print from
 * 'filename'
 *
 * Return: amount of letters successfully printed
 * from 'filename'
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *output;
	ssize_t read_bytes;

	if (fd == -1)
	{
		return (0);
	}

	output = malloc(sizeof(char) * (letters + 1));
	if (output == NULL)
	{
		return (0);
	}

	read_bytes = read(fd, output, letters);
	close(fd);

	write(STDOUT_FILENO, output, read_bytes);

	free(output);
	return (read_bytes);
}

