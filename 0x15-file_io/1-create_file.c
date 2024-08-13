#include "main.h"

/**
 * _stringlen - parse the len of a str
 *
 * @c: the str to be examined
 *
 * Return: int len of str
 */
int _stringlen(char *c)
{
	int u = 0;

	if (!c)
		return (0);
	while (*c++)
		u++;
	return (u);
}
/**
 * create_file - function that creates a file
 *
 * @filename: file to be created
 * @text_content: text to be written
 *
 * Return: 1 if successful, 0 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bt = 0, lng = _stringlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (lng)
		bt = write(f, text_content, lng);
	close(f);
	return (bt == lng ? 1 : -1);
}
