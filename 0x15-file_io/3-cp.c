#include "main.h"
#include <stdio.h>

char *create_buf(char *file);
void close_file(int fd);

/**
 * create_buf - Allocates 1024 bytes of memory for a buffer
 * @file: The name of the file for which the buffer is allocated.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes a file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: this program check the number of command-line:
 *   - 97: incorrect argument argument count.
 *   - 98: Unable to read from the source file.
 *   - 99: Unable to write to the destination file.
 *   - 100: Unable to close a file descriptor.
 */
int main(int argc, char *argv[])
{
	int from, to, br, bw;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	br = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || br == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		bw = write(to, buf, br);
		if (to == -1 || bw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		br = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (br > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}
