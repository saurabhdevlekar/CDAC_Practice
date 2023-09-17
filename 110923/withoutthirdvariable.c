#include<stdio.h>

int main()
{
    int a=30,b=20;

/*  printf("Enter the A value ");
    scanf("%d",&a);

    printf("Enter the B value ");
    scanf("%d",&b);
*/
    
    printf("After swapig A is %d and B is %d",a,b);
    
    a=a-b;
    b=b+a;
    a=b-a;

    printf("\nbefour swaping A is %d and is B is %d",a,b);
    return 0;

}