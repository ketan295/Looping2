#include <stdio.h>

main()
{ 
	int i,N;
	printf("Enter how many numbers do you want to print (1 to N) :");
	scanf("%d",&N);
	
	printf("\nNumbers from 1 to %d is: \n",N);
	for(i=1;i<=N;i++)
	{
		printf("%d ",i);
	}
}