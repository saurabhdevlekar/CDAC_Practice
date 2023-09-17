#include<stdio.h>

int main()
{
    int n,a=0,b=1,i=1,c=0;

    printf("entrt any number");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d ",c);  
        a=b; 
        b=c;  
        c=a+b;          //a=1  
       
        i++;                 

    }
    return 0;
}