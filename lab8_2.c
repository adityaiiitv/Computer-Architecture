// CS-310 LAB-8 QUES-2
// ADITYA PRAKASH
// 201351010
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

#define num 10

int main (int argc, char *argv[])
{
	int i, N, thread_id;	
	double count=0;		// FOR SUM
	double a[num];
	double b[num];
	double c[num];
	double d[num];
	#pragma omp parallel shared(a) private(i)
	{
		thread_id=omp_get_thread_num();
		#pragma omp single
		{
			N=omp_get_num_threads();
			printf("Number of threads = %d\n",N);
		}
		#pragma omp for
		for (i=0;i<num;i++) 
		{
			a[i]=1+2*i ;
		}
    
		#pragma omp for
		for (i=0;i<num;i++) 
		{
			b[i]=2+i ;
		}
		#pragma omp for reduction(+:count)
		for (i=0;i<num;i++) 
		{
			c[i]=(b[i])+(a[i]);	// ADDITION
			d[i]=(a[i])*(b[i]);	// MULTIPLICATION
		}
	}
	for (i=0;i<num;i++)
	{
		printf(" Addition[%d]\t\t=\t%2.1f\n",i,c[i]);		// SHOW
		printf(" Multiplication[%d]\t=\t%2.1f\n",i,d[i]);
	}
	return 0;
}
// END OF PROGRAM
