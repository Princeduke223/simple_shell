#include "shell.h"

/**
 * append_path - function that will add a path to the command
 * @path: path of command
 * @command: the user input command
 *
 * Return: buffer with command, NULL if failed
 */
char *append_path(char *path, char *command)
{
	char *buf;
	size_t i = 0, j = 0;
/*just diclared our integers*/

	if (command == 0)
		command = "";
/*our first comaand*/

	if (path == 0)
		path = "";
	/*allocate the memory*/

	buf = malloc(sizeof(char) * (_strlen(command) + 2));
	if (!buf)
		return (NULL);
	/*start or loop*/

	while (path[i])
	{
		buf[i] = path[i];
		i++;
	}

	if (path[i - 1] != '/')
	{
		buf[i] = '/';
		i++;
	}
	while (command[j])
	{
		buf[i + j] = command[j];
		j++;
	}
	buf[i + j] = '\0';
	return (buf);
}
