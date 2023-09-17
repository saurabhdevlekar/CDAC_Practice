#include<stdio.h>
int main()
{
    int arr[2][2],i,j;
    printf("enter element of metrix");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nyour matrix is \n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t [%d][%d]%d",i,j,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}