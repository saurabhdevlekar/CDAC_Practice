#include<stdio.h>

int main()
{
    int a,b,c;
    float cal;

    printf("Enter first value :");
    scanf("%d",&a);

    printf("\nEnter Second value :");
    scanf("%d",&b);

    printf("\nEnter third value :");
    scanf("%d",&c);

    cal=a*b*c;
    printf("%2.f",cal);

    return 0;
}