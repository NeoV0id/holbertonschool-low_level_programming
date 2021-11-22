#include "main.h"

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

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i;

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	else if (fd == -1)
		return (0);

	for (i = 0; i != '\0'; i++)
	{
		
	}
}
