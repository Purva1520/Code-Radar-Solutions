#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",a[i]);
    }
    int max=a[0],min=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=arr[i];
        }
        if(a[i]<min)
        {
            min=arr[i];
        }
    }
printf("%d %d",max,min);
return 0;
}