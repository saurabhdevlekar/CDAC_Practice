//without return and with parameter
#include<stdio.h>

int rect(int x,int y)
{
    int c;
    c=x*y;
    printf("length is %d",c);
    return 0;
}
void main()
{
    int l,w;
    printf("enter lenth and width ");
    scanf("%d%d",&l,&w);
    rect(l,w);
    return 0;
    
}

