#include "main.h"
#include <stdlib.h>

/**
 * Read_textfile - read text_file print to stdout
 * @file talks about the file being read
 * @letters talks about the number of letters that is read
 * Return- this talsks about the actual number of bytes read and printd
 * 0 when function fails or the filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return(0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);

}
