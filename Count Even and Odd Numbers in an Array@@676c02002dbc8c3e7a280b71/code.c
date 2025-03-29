#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",a[i]);
    }
    if(a[i]%2==0)
    {
        count=count+2;
        printf("%d",count);
    }
    else
    {
        count=count+1;
        printf("%d",count);
    }
return 0;
}

