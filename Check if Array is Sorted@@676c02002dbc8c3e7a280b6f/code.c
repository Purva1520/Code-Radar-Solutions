#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,issorted=1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=a[i+1])
        {
            issorted=0;
        }
    }
    if(issorted)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
return 0;
}