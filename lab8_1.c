// CS-310 LAB-8 QUES-1
// ADITYA PRAKASH
// 201351010
#include <omp.h>
#include <stdio.h>

double STEP=0;
static long NUM = 20000000;

int main ()
{
	int i;		// ITERATOR
	double st, rt;	// FOR START TIME AND RUN TIME
	double x, PI, count = 0;	// PI FOR VALUE
	STEP = 1/(double) NUM;
	for(i=1;i<=10;i++)
	{
		count=0;		// INITIALIZE TO ZERO
		omp_set_num_threads(i);	// GENERATE THREADS
		st=omp_get_wtime();
    
		#pragma omp parallel
		{
			#pragma omp single
			printf("\n NUMBER OF THREADS : %d",omp_get_num_threads());	// SHOW THE CURRENT NUMBER OF THREADS
    
			#pragma omp for reduction(+:count)
			for(i=1;i<=NUM; i++)
			{
				x = (i-0.5)*STEP;
				count = count + 4/(1+x*x);	// SUMMING
			}
		}
		PI=count*STEP;
		rt=omp_get_wtime()-st;
		printf("\n THE VALUE OF Pi IS %f GOT IN %f SECONDS.\n",PI,rt);	// FINAL OUTPUT
	}
}
// END OF PROGRAM
