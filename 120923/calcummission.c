#include<stdio.h>

int main()
{
    int sal_amt,comi;

    printf("enter the sale amount ");
    scanf("%d",&sal_amt);

    if(sal_amt>1000)
    {
       comi=(sal_amt*15)/100;
       printf("commission of sal amount is %d",comi);
    }
    return 0;
}