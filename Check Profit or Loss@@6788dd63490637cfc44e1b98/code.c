#include <stdio.h>
int main()
{
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(sp>cp)
    {
        printf("profit");
    }
    else if(cp>sp)
    {
        printf("loss");
    }
    else
    {
        printf("No Profit No Loss");
    }
return 0;
}