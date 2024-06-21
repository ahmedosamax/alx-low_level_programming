#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	int n;
    n=i%10;
    if (n>5)
        printf("Last digit of %d is %d and is greater than 5\n", i , n);
    else if (n==0)
        printf("Last digit of %d is %d and is 0\n", i , n);
    else if (n<6 && n>0)
        printf("Last digit of %d is %d and is less than 6 and not 0\n", i , n);        
	return (0);
}
