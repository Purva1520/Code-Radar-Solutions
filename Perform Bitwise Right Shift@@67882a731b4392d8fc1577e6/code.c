#include <stdio.h>
int main()
{
    int a,shift,result;
    scanf("%d %d",&a,&shift);
    result=a>>shift;
    print("%d",result);
    return 0;
}