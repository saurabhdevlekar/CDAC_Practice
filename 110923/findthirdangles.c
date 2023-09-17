#include<stdio.h>

int main()
{
    int a,b,c;
    
    printf("enter the first Angle :");
    scanf("%d",&a);

    printf("enter the second Angle :");
    scanf("%d",&b);

    c=180-(a+b);

    printf("third angle is %d ",c);
    return 0;
}