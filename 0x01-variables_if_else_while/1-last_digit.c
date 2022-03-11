#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is ", n);
	int last = n % 10;	//store the last digit in 'last' variable
	if(last > 5)
		printf("and is greater than 5");
	else if(last == 0)
		printf("and is 0");
	else if(last < 6 && last != 0)
		printf("and is less than 6 and not 0");
	return (0);
}
