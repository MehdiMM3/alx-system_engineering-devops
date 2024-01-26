#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - infinite while loop.
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - five zombie processes.
 * Return: Always 0.
 */
int main(void)
{
	pid_t kuy;
	char tot = 0;

	while (tot < 5)
	{
		kuy = fork();
		if (kuy > 0)
		{
			printf("Zombie process created, PID: %d\n", kuy);
			sleep(1);
			tot++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}

