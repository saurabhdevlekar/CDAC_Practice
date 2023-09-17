#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("enter the five numbers ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a>b && a>c && a>d && a>e)
    {
        printf("a is grater");
    }
    else if (b>c && b>d && b>e)
    {
        printf("b is grater");
    }
    else if (c>d && c>e)
    {
        printf("c is grater");
    }
    else if (d>e)
    {
        printf("d is grater");
    }
    else
    {
        printf("e is grater");
    }
    return 0;
    
}