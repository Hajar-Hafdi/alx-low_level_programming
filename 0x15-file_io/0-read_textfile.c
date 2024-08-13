#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to be read
 * @letters: num of bytes
 *
 * Return: num of b printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t bt;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bt = read(f, &buffer[0], letters);
	bt = write(STDOUT_FILENO, &buffer[0], bt);
	close(f);
	return (bt);
}
