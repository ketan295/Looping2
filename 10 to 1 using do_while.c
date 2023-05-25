#include <stdio.h>

main()
{
	int a = 10;
	printf("Numbers from (10 to 1):\n ");
	do
	{
		printf("%d ", a);
		a--;
	} while (a >= 1);
}