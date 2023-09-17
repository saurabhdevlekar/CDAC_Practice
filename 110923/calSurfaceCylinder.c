#include<stdio.h>
//WAP to calculate the surface of the cylinder.(2*pi*r*h) 
int main()
{
    float r=7,h=8,s;
    double pi=3.14;

    // printf("Enter the radius ") ;
    // scanf("%d",r);

    // printf("Enter the hight ") ;
    // scanf("%d",h);

    s=(2*pi*r*h);

    printf("surface of cylinder is %lf",s);
    
    return 0;

}