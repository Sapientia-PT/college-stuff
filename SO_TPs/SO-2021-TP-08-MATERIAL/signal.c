#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void apanha_sinal ()
{
	printf ("O processo %d vai terminar.\n", getpid ());
	exit (0);
}

int main (int argc, char *argv[])
{
	signal (SIGINT, apanha_sinal);
	while (1) {
		sleep (2);
		printf ("estou a repetir...\n");
	}
	return 0;
}
