#include "main.h"

/**
 * main - Tries to copy contents of an
 * input file (arg 1) into an output
 * file (arg 2).
 *
 * If the output file already exists,
 * it truncates it before writing
 * in it.
 *
 * If it doesn't exist, 'main'
 * creates it and gives it
 * these permissions: rw-rw-r--
 * (or 0664).
 *
 * It copies 1024 bytes at a time.
 *
 * @argc: amount of shell arguments
 * @argv: shell arguments
 *
 * Return:
 * 0 if 'main' is successful;
 *
 * 97 if the amount of shell arguments
 * is not 3;
 *
 * 98 if the input file can't be read or
 * doesn't exist;
 *
 * 99 if 'main' can't open, write to,
 * or create output file;
 *
 * or 100 if closing any of the two files
 * fails.
 */
int main(int argc, char **argv)
{
	int input_fd;
	int buff_size = 1024;
	char input_buff[1024];
	int read_bytes;
	int output_fd;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	output_fd = open(argv[2], O_WRONLY | O_TRUNC, 0664);
	if (output_fd == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	do {
		read_bytes = read(input_fd, input_buff, buff_size);
		write(output_fd, input_buff, read_bytes);
	} while (read_bytes);
	if (close(input_fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", input_fd);
		return (100);
	}
	if (close(output_fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", output_fd);
		return (100);
	}
	return (0);
}

