#include "shell.h"
/**
 * setenv_builtin - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: always return 0
 */
void setenv_builtin(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: Invalid arguments\n");
		return;
	}

	if (setenv(argv[1], argv[2], 1) != 0)
	{
		perror("Error");
	}
}

/**
 * unsetenv_builtin - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: always return 0
 */

void unsetenv_builtin(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error: Invalid arguments\n");
		return;
	}
	if (unsetenv(argv[1]) != 0)
	{
		perror("Error");
	}
}

/**
 * cd_builtin - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: always return 0
 */

void cd_builtin(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error: Invalid arguments\n");
		return;
	}

	if (chdir(argv[1]) != 0)
	{
		perror("Error");
	}
}

/**
 * env_builtin - Entry point
 * @argc: argument count
 * Return: always return 0
 */
void env_builtin(int argc)
{
	int i;

	if (argc != 1)
	{
		printf("Error: Invalid arguments\n");
		return;
	}

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", environ[i]);
	}
}
