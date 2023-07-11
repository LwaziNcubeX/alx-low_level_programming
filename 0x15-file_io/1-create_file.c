#include "main.h"
/**
 * create_file - creates a new file
 * @filename: name of the file
 * @text_content: text to write
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		sz = write(fd, text_content, strlen(text_content));
		if (sz == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
