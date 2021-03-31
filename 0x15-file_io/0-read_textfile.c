#include <stdio.h>
#include <stdlib.h>
/* -- open & creat libraries -- */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/* -- read & write -- */
#include <unistd.h>

#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 *@filename: is the file to read
 *@letters: is the number of letters it sould read and print
 * Return: printed chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t read_buf, printed = 0;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY); /*O_RDONLY : the flag to read only the file*/
	/* syntax : int open(const char *pathname, int flags); */
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	read_buf = read(fd, buf, letters);
	if (read_buf == -1UL)
	{
		free(buf);
		return (0);
	}

	/* syntax : ssize_t read(int fd, void *buf, size_t count); */
	printed = write(STDOUT_FILENO, buf, read_buf);
	if (printed == -1UL)
	{
		return (0);
	}
	/* write - write to a file descriptor */
	/* ssize_t write(int fd, const void *buf, size_t count); */
	/*STDOUT_FILENO : is the file descriptor (1)*/
	free(buf);
	close(fd);
	return (printed);
}
