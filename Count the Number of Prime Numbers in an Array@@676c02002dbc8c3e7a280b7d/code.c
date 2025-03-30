#include <stdio.h>
int main() 
{
    int n, i, j, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        int p = 1;
        if (arr[i] < 2) 
        { 
            p = 0;
        } 
        else 
        {
            for (j = 2; j * j <= arr[i]; j++) 
            {
                if (arr[i] % j == 0) 
                {
                    p = 0;
                    break;
                }
            }
        }
        if (p) 
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
