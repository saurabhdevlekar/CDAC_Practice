#include<stdio.h>

int main()
{
   int total_amt,purchase_amt,discount;

   printf("enter the purchase amt ");
   scanf("%d",&purchase_amt);
    
    if(purchase_amt>1500)
    {
      discount=purchase_amt-200;
      printf("total amt after discount %d",discount);
    }
    else
    {
         printf("No discpunt is applid");
    }
    return 0;
}