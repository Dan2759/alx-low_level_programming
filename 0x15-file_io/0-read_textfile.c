#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints it to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed. 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f;
	ssize_t bw;
	ssize_t br;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	br = read(f, buffer, letters);
	bw = write(STDOUT_FILENO, buffer, br);

	free(buffer);
	close(f);
	return (bw);
}
