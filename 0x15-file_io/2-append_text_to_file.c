#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: path of the file
 * @text_content: content to append at end of file
 * Return: 1 on Success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rd;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	rd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (rd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rwr = write(rd, text_content, letters);

	if (rwr == -1)
		return (-1);

	close(rd);

	return (1);
}
