#include <stdio.h>

main()
{
	int i, n;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	printf("\nEven Numbers from %d to 1:\n", n);
	
	for(i=n ; i>=1 ; i--)
	{
		if ((i% 2)== 0)
		{
			printf("%d ", i);
		}
	}
}