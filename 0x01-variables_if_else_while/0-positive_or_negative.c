#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* main - Entry Point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);
	return (0);
}
