#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
* main - entry point
* @argc: the number of arguments
* @argv: an array of string arguments
*
* Return: 0 on success, or an error code on failure
*/
int main(int argc, char **argv)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)))
{
if (bytes_read == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

if (bytes_written != bytes_read)
dprintf(STDERR_FILENO, "Error: Short write to %s\n", argv[2]), exit(99);
}

if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

return (0);
}
