#include <stdio.h>

main()
{ 
	int i,N;
	printf("Enter how many numbers do you want to print (N to 1) :");
	scanf("%d",&N);
	
	printf("\nNumbers from %d to 1 is: \n",N);
	for(i=N ; i>=1 ; i--)
	{

		printf("%d ",N);
		N--;
	}
}