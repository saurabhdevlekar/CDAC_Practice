#include<stdio.h>

int main()
{
    int a,b,temp;

    printf("Enter the A value :");
    scanf("%d",&a);

     printf("Enter the B value :");
    scanf("%d",&b);

    printf("befor swaping A is %d and B is %d:",a,b);

    temp=a;
    a=b;
    b=temp;
    
    printf("\nAfter swap A is %d and B is %d:",a,b);

    return 0;
}