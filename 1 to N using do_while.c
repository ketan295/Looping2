#include <stdio.h>

main()
{
	int i, N;
	
	printf("Enter how many number do you want to print from (1 to N) :");
	scanf("%d", &N);
	
	printf("Numbers from 1 to %d:\n ", N);
	i=1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= N);
}