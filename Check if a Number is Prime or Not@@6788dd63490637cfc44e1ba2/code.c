#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(a=1; a<=n; a++)
    {
        if(n%a==0)
        {
            count=count+1;
        }
    }
    if(a%2==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
return 0;
}