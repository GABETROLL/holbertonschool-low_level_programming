#include "main.h"

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

	printf("%s\n", output);
	return (read_bytes);
}

