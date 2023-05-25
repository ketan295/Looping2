#include <stdio.h>

main()
{
	int i,n;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	printf("Odd Numbers from 1 to %d:\n", n);
	
	for(i=1 ; i<= n ; i++)
	{
		if ((i% 2) != 0)
		{
			printf("%d ", i);
		}
	}
}