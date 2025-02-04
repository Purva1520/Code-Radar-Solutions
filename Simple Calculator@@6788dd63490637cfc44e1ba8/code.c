#include <stdio.h>
int main()
{
    int a,o,b,sum,diff,div,mul;
    scanf("%d %d %c",&a,&b, &o);
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

        case'/':
        div=a/b;
        printf("%d",div);
        break;

        case '*':
        mul=a*b;
        printf("%d",mul);
        break;

        default:
        printf("Error");
    }
return 0;
}