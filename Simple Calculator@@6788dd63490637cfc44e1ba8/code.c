#include <stdio.h>
int main()
{
    int a,b,sum,diff,div,mul;
    char o;
    scanf("%d %d",&a,&b);
    scanf(" %c", &o);

    switch(o)
    {
    case '+':
        sum=a+b;
        printf("%d",sum);
        break;

    case '-':
        diff=a-b;
        printf("%d",diff);
        break;

    case '/':
    if(b!=0)
           {div=a/b;
        printf("%d",div);
        break;}
        else
        {printf("error");
        break;}

    case '*':
        mul=a*b;
        printf("%d",mul);
        break;

    default:
        printf("error");
    }
return 0;
}