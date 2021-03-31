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
 * create_file - function that creates a file.
 *@filename: is the filename to create.
 *@text_content: is the content of the file.
 * Return: 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int Cre, i, length = 0, printed;

	if (filename == NULL)
	{
		return (-1);
	}
	i = 0;
	if (text_content != NULL) /*to avoid segmentation fault*/
	{
		i = 0;
		while (text_content[i] != '\0')
		{
			length++;
			i++;
		}
	}
	Cre = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (Cre == -1)
	{
		return (-1);
	}
	printed = write(Cre, text_content, length);
	if (printed == -1)
	{
		return (-1);
	}
	close(Cre);
	return (1);
}
