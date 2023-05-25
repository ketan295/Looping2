#include <stdio.h>

main()
{ 
	int i,N;
	long sum=0;
	
	printf("Enter how many numbers of sum do you want from (1 to N) :");
	scanf("%d",&N);
	
	for(i=1 ; i<=N ; i++)
	{
		sum=sum+i;
	}
	printf("\nSum of 1 to %d = %ld\n",N,sum);
}