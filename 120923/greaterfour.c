#include<stdio.h>
//nasted if
int main()
{
   int a,b,c,d;

   printf("enter number ");
   scanf("%d%d%d%d",&a,&b,&c,&d);

   if(a>b)
   {
      if(a>c)
      {
        if(a>d)
        {
            printf("A is grater %d",a);
        }
        else
        {
            printf("D is grater %d",d);
        }
      }  
      else
        {
            printf("c is grater %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("b is grater %d",b);
            }
            else
            {
                printf("d is grater %d",d);
            }
            
        }
        else
        {
            if(c>d)
            {
                printf("c is grater %d",c);
            }
            else
            {
                printf("d is grater %d",d);
            }
        }
    }
    return 0;

   
}