#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: The name of the file to append text to.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t num_bytes_written;
off_t offset;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}

offset = lseek(fd, 0, SEEK_END);
if (offset == -1)
{
close(fd);
return (-1);
}

num_bytes_written = write(fd, text_content, strlen(text_content));
if (num_bytes_written == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
