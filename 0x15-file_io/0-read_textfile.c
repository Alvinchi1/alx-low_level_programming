#include "main.h"
#include <stdlib.h>

/**
 * Read-textfile - Reads file print to Stdout
 * @filename - the text being read
 * @letters - number of letterrs read
 * Return - w- actual number of bytes read and printed
 * 0 when function fails or filename is Null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t time;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	time = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, time);

	free(buf);
	close(fd);
	return (w);
}
