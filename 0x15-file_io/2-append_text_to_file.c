#include "main.h"

/**
 * _stringlen - parse the len of str
 *
 * @c: the length to be examined
 *
 * Return: int
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
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: text to be written
 *
 * Return: 1 if Successful, 0 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bt = 0, lng = _stringlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (lng)
		bt = write(f, text_content, lng);
	close(f);
	return (bt == lng ? 1 : -1);
}
