#include<stdio.h>
void main()
{
    int arr[3][3];
    printf("\n enter the 2d array :");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
}