#include <stdio.h>
int main()
{
    int i,j,n,num=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(num==1)
            {
                printf("1 ");
                num=0;
            }
            else
            {
                printf("0 ");
                num=1;
            }
        }
    printf("\n");
    }
return 0;
}