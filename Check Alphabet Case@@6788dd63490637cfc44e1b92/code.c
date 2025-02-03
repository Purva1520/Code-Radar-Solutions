#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a<='z')
    {
        printf("Lowercase");
    }
    else if(a<='Z')
    {
        printf("Uppercase");
    }
    else
    {
        printf("Not Valid");
    }
return 0;
}