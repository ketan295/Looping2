#include <stdio.h>
main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    
   do
    {
        f=f*i;
        i++;
    }
     while(i<=n);
     
    printf("\nThe Factorial of %d is : %d",n,f);
}