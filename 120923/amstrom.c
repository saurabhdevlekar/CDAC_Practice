#include<stdio.h>
//armstrong number
//input 153-----> 1*1*1 + 5*5*5 + 3*3*3 = 153
int main()
{
    int num,r,c,sum=0,temp;
    printf("enter number ");
    scanf("%d",&num);
    temp=num;
    //num=153  num=15  num=1  num=0
    while(num!=0)
    {
        r=num%10; //r=3     r=5       r=1
        c=r*r*r;   //c=27    c=125      c=1
        sum=sum+c;  //sum=27   sum=152   sum=153
        num=num/10;  // num=15   num=1    n=0
    }
    if(sum==temp)  //153=153
    {
       printf("\n %d is armstrom",temp);
    }
    else
    {
        printf("\n %d is not armstrom",temp);
    }
    return 0;
}