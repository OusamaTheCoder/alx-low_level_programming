#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFSIZE 1024

/**
 * open_source_file - Opens the source file for reading.
 * @from_file: The path to the source file.
 *
 * Return: The file descriptor for the source file.
 */
int open_source_file(char *from_file)
{
	int fd_from = open(from_file, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
		exit(98);
	}
	return (fd_from);
}

/**
 * open_destination_file - Opens the destination file for writing.
 * @to_file: The path to the destination file.
 *
 * Return: The file descriptor for the destination file.
 */
int open_destination_file(char *to_file)
{
	int fd_to = open(to_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
		exit(99);
	}
	return (fd_to);
}

/**
 * copy_file - Copies data from source file to destination file.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */
void copy_file(int fd_from, int fd_to)
{
	char buffer[BUFSIZE];
	ssize_t r, w;

	while ((r = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	char *from_file, *to_file;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	from_file = argv[1];
	to_file = argv[2];

	fd_from = open_source_file(from_file);
	fd_to = open_destination_file(to_file);

	copy_file(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

