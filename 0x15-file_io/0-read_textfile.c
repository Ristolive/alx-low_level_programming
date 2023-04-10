#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: path of the file to read
 * @letters: number of letters to read and print
 * Return: number of letters readed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	fr = read(fo, buffer, letters);
	fw = write(STDOUT_FILENO, buffer, fr);

	if (fo == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fo);

	return (fw);
}
