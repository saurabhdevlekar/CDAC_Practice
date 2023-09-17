#include<stdio.h>

int main()
{
    int r;
    float pi=3.14,cir;

    printf("Enter Radious :");
    scanf("%d",&r);

    cir=(pi*r*r);
    printf("The Area of circle is :%2.f",cir);

    return 0;
}
