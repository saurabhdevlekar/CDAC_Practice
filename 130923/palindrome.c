#include<stdio.h>
//121
 int main()
 {
    int num,temp,r,sum=0;

    printf("enter any number ");
    scanf("%d",&num);
    temp=num;
    
    do
    {
        r = num % 10;  //1
        sum=(sum*10)+r;  //1
        num=num/10;


    } while (num>0);

    if(temp==sum)
    {
        printf("number is palindrome ");
    }
    else
    {
        printf("number is not palindrome ");
    }
    return 0;
 }

 