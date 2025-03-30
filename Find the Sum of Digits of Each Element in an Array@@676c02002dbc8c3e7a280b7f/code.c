#include <stdio.h>
int main()
{
    int n,d,i,sum;
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
        while(num>0)
        {
            d=num%10;
            sum=sum+d;
            num=num/10;
        }
    }
printf("%d %d",a[i],sum);
return 0;
}