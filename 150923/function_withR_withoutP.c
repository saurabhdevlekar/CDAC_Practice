#include<stdio.h>
//with return without parameter

void add();  //declaration

void main() 
{
    add();  //calling

    return 0;
}
   void add()
{
    int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\naddition of two value :%d",c);
}