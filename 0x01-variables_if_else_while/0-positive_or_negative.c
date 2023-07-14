#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point 
 *
 * Return: Always 0 (Success) 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);
	if (x > 0)
      	{
           printf("The number is positive \n");
      	}
      	else if (x < 0)
      	{
           printf("The number is negative \n");
      	}
      	else
      	{
        	printf("The number is zero \n");
    	}
	return (0);
}
