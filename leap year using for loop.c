#include <stdio.h>

main()
{
	int i;

	printf("Leap years between 2000 to 3000:\n");

	for(i=2000 ; i<=3000 ; i++)
	{
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d\n", i);
		}
	}
}