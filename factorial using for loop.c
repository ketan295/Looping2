#include <stdio.h>
main()
{
    int n,i,f;
    f=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    
    for(i=1 ; i<=n ; i++)
    {
        f=f*i;
    }
    printf("\nThe Factorial of %d is : %d",n,f);
}