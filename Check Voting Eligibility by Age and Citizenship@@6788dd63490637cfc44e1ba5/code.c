#include <stdio.h>
int main()
{
    int age,c;
    scanf("%d %d",&age,&c);
    if(age>=18 && c==1)
    {
        printf("Eligible");
    }
    else if(age>=18 && c==0 || age<=18 && c==1 || age<=18 && c==0)
    {
        printf("Not Eligible");
    }
return 0;
}