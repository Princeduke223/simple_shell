#include "shell.h"

/**
 * exit_cmd - function that will quit the current command
 * @command: the tokenized command
 * @line: input from the stdin function header
 * Return: 0
 */
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
