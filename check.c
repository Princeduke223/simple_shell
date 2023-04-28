/* environment variables */
#include "shell.h"

/**
 * checker - function that will checks if our command is built in
 * @cmd: the user input
 * @buf: buffer line from from the getline function
 * Return: 1 if the cmd executes, 0 if it will not execute
 */
int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}
