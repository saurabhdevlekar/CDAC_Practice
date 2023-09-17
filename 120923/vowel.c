#include<stdio.h>

int main()
{
    char cha;

    printf("enter any character ");
    scanf("%c",&cha);

    if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'||cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U')
    {
        printf("character is vowel");
    }
    else
    {
        printf("character is consonant");
    }
    return 0;

}