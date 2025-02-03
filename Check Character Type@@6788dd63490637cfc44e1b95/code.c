#include <stdio.h>
int main()
{
    char a,vowels='aeiou';
    scanf("%c",&a);
    if(a=='vowels')
    {
        printf("Vowel");
    }
    else if((a>='a' && a<='z') - vowels||(a>='A' && a<='Z')-vowels)
    {
        printf("Consonant");
    }
    else if(a<='9' && a>='0')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
return 0;
}