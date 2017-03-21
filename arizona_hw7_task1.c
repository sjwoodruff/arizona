/*
 * =====================================================================================
 *
 *       Filename:  arizona_hw7_task1.c
 *       	Usage:  ./arizona_hw7_task1.c
 *    Description:  Task 1
 *
 *        Version:  1.0
 *        Created:  03/16/2017 04:21:37 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Sterling Woodruff (), sterlingwoodruff@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>

#define LEN 5
/* Function Prototypes */
void copy_arr(double ar[], const double ar2[], int n);
void copy_ptr(double *ar1, const double *ar2, int n);
//void copy_ptrs(double *ar2, const double *start, const double * end));
//void show_arr(const double ar[], double n);


/* Main Program */
int main (int argc, char *argv[])
{
	double source[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[LEN];
	double target2[LEN];

	copy_arr(source, target1, LEN);
	copy_ptr(source, target2, LEN);
	return 0;
}


/* Function Defenitions */

void copy_arr(double ar[], const double ar2[], int n)
{
	printf("Source Array:");
	for(int i = 0; i < LEN; i++)
	{
		printf(" %.1lf  ", ar[i]); 
	}
	printf("\n");
	
	return;
}

void copy_ptr(double *ar1, const double *ar2, int n)
{
	printf("Copied by Subscript:");
	for(int i = 0; i < LEN; i++)
	{
		printf(" %.1lf ", *ar1);
		*(ar1++) = *(ar2++);
	}
	printf("\n");

	return;
}






