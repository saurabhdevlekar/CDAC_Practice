#include<stdio.h>
//without return with parameter

void add()  //declaration
{
    int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\naddition of two value :%d",c);
}
void main() //calling
{
    add();
}