#include <stddef.h>
#include "main.h"

/**
 * append_text_to_file - dis code appends a text at the end of a file
 * @filename: points to the name of the file
 * @text_content is the string that is added at the end of a file
 *
 * Return: if the funx fails of the filename is NULL --1
 * otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return(-0);

	close(0);

	return(1);
}
