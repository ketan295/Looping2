#include<stdio.h>

void main()
{
	int i, N;

	printf("Enter how many number do you want to print from (N to 1) :");
	scanf("%d", &N);
	
	printf("\nNumbers from %d to 1:\n ", N);

	i = N;
	do
	{
		printf("%d ", i);
		i--;
	}while(i >= 1);

	printf("\n");
}