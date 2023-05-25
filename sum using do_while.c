#include <stdio.h>

main()
{ 
	int number=1,N;
	long sum=0;
	printf("Enter how many numbers of sum do you want from (1 to N) :");
	scanf("%d",&N);
	
	do
	{
		sum=sum+number;
		number++;
	}
	while(number<=N);
	
	printf("\nSum of 1 to %d = %ld\n",N,sum);
}