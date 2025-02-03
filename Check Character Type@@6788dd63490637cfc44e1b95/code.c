#include <stdio.h>
int main()
{
    char a,vowel='aeiou';
    scanf("%c",a);
    if(a==vowel)
    {
        printf("Vowel");
    }
    else if((a>='a' && a<='z') - vowel||(a>='A' && a<='Z')-vowel)
    {
        printf("Consonant");
    }
    else if(a>='9' && a<='0')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
return 0;
}