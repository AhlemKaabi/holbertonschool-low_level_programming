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
 * append_text_to_file - function that appends text at the end of a file.
 *@filename: is the filename to create.
 *@text_content: is the content to add at the end of the file.
 * Return: 1 on success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int APP, i, length = 0, print;

	if (filename == NULL)
	{
		return (-1);
	}
	i = 0;
	while (text_content[i] != '\0')
	{
		length++;
		i++;
	}
	if (text_content == NULL)
	{
		if (filename != NULL)
		{
			return (1);
		}
		return (-1);
	}
	APP = open(filename, O_RDWR | O_APPEND, 0600);
	if (APP == -1)
	{
		return (-1);
	}
	print = write(APP, text_content, length);
	if (print == -1)
	{
		return (-1);
	}
	close(APP);
	return (1);
}
