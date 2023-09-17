#include<stdio.h>

int main()
{
    int num;
    printf("enter the nuber ");
    scanf("%d",&num);
     
    if(num%5==0 && num%8==0)
    {
        printf("number is divisible by 8 and 5");
    }
    else if (num%8==0)
    {
        printf("number is divisible by 8");
    }
    else if (num%5==0)
    {
        printf("number is divisible by 5");
    }
    else if (num%5!=0 && num%8!=0)
    {
        printf("number is not divisible by 5 and 8");
    }
    return 0;   
}