#include <stdio.h>
int main()
{
    int a,o,b,sum,sub,div,mul;
    scanf("%d %d %c",&a,&b,&o);
    switch(o)
    {
        case '+';
        sum=a+b;
        print("%d",sum);
        break;

        case '-'
        diff=a-b;
        print("%d",diff);
        break;

        case'/'
        div=a/b;
        printf("%d",div);
        break;

        case '*'
        mul=a*b;
        printf("%d",mul);
        break;
    }
return 0;
}