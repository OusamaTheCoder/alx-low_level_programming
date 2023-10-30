#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success, or an error code.
 */
int main(int argc, char *argv[])
{
    int from_fd, to_fd, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];
    char *from_filename, *to_filename;

    if (argc != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
        return (97);
    }

    from_filename = argv[1];
    to_filename = argv[2];

    from_fd = open(from_filename, O_RDONLY);
    if (from_fd == -1)
    {
        dprintf(2, "Error: Can't read from %s\n", from_filename);
        return (98);
    }

    to_fd = open(to_filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (to_fd == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", to_filename);
        close(from_fd);
        return (99);
    }

    while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(to_fd, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            dprintf(2, "Error: Can't write to %s\n", to_filename);
            close(from_fd);
            close(to_fd);
            return (99);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(2, "Error: Can't read from %s\n", from_filename);
        close(from_fd);
        close(to_fd);
        return (98);
    }

    if (close(from_fd) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", from_fd);
        return (100);
    }

    if (close(to_fd) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", to_fd);
        return (100);
    }

    return (0);
}

