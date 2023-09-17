#include<stdio.h>
 int main()
 {  //7
    int n,i,c=0;
    printf("enter any number ");
    scanf("%d",&n);

    for(i=2; i<=n ; i++)
    {
        if(n % i == 0)
        {
           c++;
        }
        
    }
    if(c==1)
    {
        printf("number is prime");
    }
    else 
    {
        printf("number is not prime");
    }
    return 0;
 }
