#include<stdio.h>
void main()
{
    int arr[10];
    int positiveCount=0;
    int negativeCount=0;
    printf("enter an array:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            positiveCount++;
        }
        else if (arr[i]<0)
        {
            negativeCount++;
        }
    }
    printf("\n positive count :%d",positiveCount);
    printf("\n negative count :%d",negativeCount);
}