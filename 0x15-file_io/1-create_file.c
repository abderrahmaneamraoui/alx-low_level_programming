#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - Creates a new file with the given filename and writes the
 *               specified text to it. If the file already exists, it is
 *               truncated. The file is created with permissions rw-------.
 *
 * @filename: The name of the file to create.
 * @text_content: The text to write to the file. Can be NULL.
 *
 * Return: 1 on success, -1 on failure (file cannot be created, file cannot be
 *         written, write "fails", etc...)
 */
int create_file(const char *filename, char *text_content)
{
int fd;
mode_t mode = S_IRUSR | S_IWUSR;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
ssize_t num_bytes_written = write(fd, text_content, strlen(text_content));
if (num_bytes_written == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
