#include <stdio.h>
#include <time.h>

void tick()
{
	time_t tx;
	struct tm *txm;

	tx = time (0);
	txm = localtime (&tx);
	printf ("%04d-%02d-%02d %02d:%02d:%02d\n",
	       txm->tm_year+1900, txm->tm_mon+1, txm->tm_mday, 
	       txm->tm_hour, txm->tm_min, txm->tm_sec);
}

void espera_t_mult_3 ()
{
	while (time (0) % 3)
		sleep (1);
}

int main()
{
	espera_t_mult_3 ();

	while (1) {
		sleep (3);
		tick ();
	}
}
