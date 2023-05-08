#include "main.h"
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it to stdout
* @filename: name of file to read
* @letters: number of letters to read and print
*
* Return: number of letters read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, bytes_read, bytes_written;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters + 1));
if (buf == NULL)
return (0);

bytes_read = read(fd, buf, letters);
if (bytes_read == -1)
{
free(buf);
close(fd);
return (0);
}

bytes_written = write(STDOUT_FILENO, buf, bytes_read);
free(buf);
close(fd);

if (bytes_written == -1 || bytes_written != bytes_read)
return (0);

return (bytes_written);
}
