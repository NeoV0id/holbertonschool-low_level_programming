#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: text to input in file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int ptr;
	int i;

	for (i = 0; text_content[i] != '\0'; i++);

	ptr = malloc(text_content[i] * sizeof char);

	if (ptr == NULL)
		return (-1);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREATE | O_RDWR);

	if (text_content == NULL)
		return (1);

	write(fd, *text_content, i);

	close(fd);

	return (1);
}
