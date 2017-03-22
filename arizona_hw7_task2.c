/*
 * =====================================================================================
 *
 *       Filename:  arizona_hw7_task2.c
 *       	Usage:  ./arizona_hw7_task2.c
 *    Description: Random array
 *
 *        Version:  1.0
 *        Created:  03/16/2017 04:23:57 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Adam Lee (), Adamlee1@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>

#define MAXNUM 10
/*function Prototype*/

void MaxMin(int numvals, int vals[], int* min, int* max);
	int min,max;

/* Main Program */
int main(int argc, char *argv[])
{
	srand(time(NULL));
	int randval[MAXNUM] = {rand(),1,2,3,4,5,6,7,8,9}; 

	printf("Generating random list \n\n");
	printf("This list is: \n\n");
	for (int i = 0; i < MAXNUM; i++)
	{

	printf("%d ", randval[i]);
	}
	MaxMin(MAXNUM,randval,&min,&max);
	
	printf("\n\nThe maximum value is: %d\n\n", max);
	printf("The minimum value is: %d\n\n", min);



	return 0;
}


/* Function Defenitions */

void MaxMin(int numvals, int vals[], int* min, int* max)
{
	*max = vals[0];
	*min = vals[0];

	for (int j = 1; j < numvals; j++)
	{
		if (*min > vals[j])
		{
			*min = vals[j];
		}
	}

	for (int i = 1; i < numvals; i++)
	{
		if (*max < vals[i])
		{
			*max = vals[i];
		}
	}


//	int numvals[MAXNUM] = {rand(2)}; 


	return;
}

