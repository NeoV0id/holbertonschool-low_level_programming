#include "main.h"
#include <stddef.h>
#include <stdlib.h>

#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: (const char) name of files to execute on
 * @letters: letters is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDWR);

	if (filename == NULL)
		return (0);

	else if (fd == -1)
		return (0);

	read(fd, buf, letters);
	write(fd, buf, letters);

	return (letters);
}
