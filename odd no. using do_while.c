#include <stdio.h>

main()
{
	int number = 1;
	int n;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	printf("\nOdd Numbers from 1 to %d:\n", n);
	do
	{
		if ((number % 2) != 0)
			printf("%d ", number);
		    number++;
		    
	}while (number <= n);
}