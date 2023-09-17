#include<stdio.h>
//WAP to calculate the total and avg of five subjects. 
int main()
{
    int s1,s2,s3,s4,s5,sum;
    float avg;

    printf("Enter the sub marks ");
    scanf("\n%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    
    sum=s1+s2+s3+s4+s5;
    avg=sum/5.0;

    printf("Enter the total is :%d",sum);
    printf("\nEnter the avg of five subjects:%f",avg);

    return 0;
}