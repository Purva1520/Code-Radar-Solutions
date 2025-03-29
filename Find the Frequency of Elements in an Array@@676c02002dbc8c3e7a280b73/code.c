#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],f[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0; i<n; i++)
    {
        int count=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=count;
            printf("%d %d\n",a[i],f[i]);
        }
    }
return 0;
}