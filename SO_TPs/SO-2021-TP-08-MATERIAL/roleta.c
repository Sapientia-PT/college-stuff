#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

#define MAX 1000

int roleta = 0;

void apanha_interrupcao ()
{
	printf ("Obteve %d pontos.\n", roleta);
	exit (0);
}

int main (int argc, char *argv[])
{
	signal (SIGINT, apanha_interrupcao);
	for (;;) {
		roleta = (roleta + 1) % 1000;
	}
	return 0;
}
