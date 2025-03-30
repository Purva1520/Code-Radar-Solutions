#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,Sorted=1;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            Sorted=0;
            break;
        }
    }
    if(Sorted)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
return 0;
}