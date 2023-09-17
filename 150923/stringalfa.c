#include<stdio.h>

int main()
{
    int i;
    char str[20],len=0;

    printf("enetr the string for mesuring character ");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("%d",len);
    
    return 0; 
    
}