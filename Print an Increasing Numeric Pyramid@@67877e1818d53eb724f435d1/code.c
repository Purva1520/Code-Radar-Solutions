#include <stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",n);
    for(i=0; i<n; i++)
    {
        for(k=0; k<2*n-1; k++)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
        {
            printf("%d",i);
        }
    printf("\n");
    }
return 0;
}