#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	count = open(filename, O_RDONLY);

	if (count == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(count, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(count);

	free(buf);

	return (nwr);
}
