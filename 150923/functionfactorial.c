#include<stdio.h>
//with return type and with parameter

int factorial(int fact,int n)
{
    for(int i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    printf("factorial is %d",fact);
    return 0;
}
int main()
{
    int fact=1,n;
    printf("enter number for factorial ");
    scanf("%d",&n);
    factorial(fact,n);
    return 0;
    
}