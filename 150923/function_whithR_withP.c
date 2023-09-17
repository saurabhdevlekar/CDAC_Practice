#include<stdio.h>
//with return with parameter
int add(int,int);

int add(int x,int y)  //declaration
{
    int z;
    z=x+y;
   return z;
}

main() //calling
{
   int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=add(a,b); //calling
    printf("\naddition of two value :%d",c);
}