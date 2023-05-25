#include <stdio.h>

main()
{
	int startYear = 2000, endYear = 3000;

	printf("Leap years between 2000 to 3000:\n");

	do
	{
		if ((startYear % 4 == 0) && (startYear % 100 != 0) || (startYear % 400 == 0))
		
			printf("%d  ", startYear);
		    startYear++;
	}
	while (startYear <= endYear);
}