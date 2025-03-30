#include <stdio.h>
int main()
{
    int n,sum=0,d,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++) 
    {
        int num = a[i];
        sum = 0;
        while(n>0)
        {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
    }
printf("%d",sum);
return 0;
}