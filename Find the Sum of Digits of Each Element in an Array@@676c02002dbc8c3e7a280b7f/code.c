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
    while(n>0)
    {
        d=num%10;
        sum=sum+d;
        n=n/10;
    }
printf("%d",sum);
return 0;
}