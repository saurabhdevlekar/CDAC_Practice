#include<stdio.h>
//1+3+9+=13
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9},i,j,sum=0;

    // printf("entr 9 value \n");
    //  for(i=0;i<3;i++)
    //  {
    //     for(j=0;j<3;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    //  }
     printf("array addition \n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            if(i+j==1||i+j==3)
            {
                printf("%d+",arr[i][j]);
                sum=sum+arr[i][j];

            }
            
        }
     }
        printf("=%d",sum);
}