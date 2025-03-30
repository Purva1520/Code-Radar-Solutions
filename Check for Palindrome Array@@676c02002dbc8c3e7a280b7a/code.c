#include <stdio.h>
int main() 
{
    int n,i,p=1;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++) 
    {
        if (a[i] != a[n - 1 - i]) 
        {
            p = 0;
            break;
        }
    }
    printf("%d",a[i]);
    if (p) 
    {
        printf("YES");
    } 
    else 
    {
        printf("NO");
    }
 return 0;
}
