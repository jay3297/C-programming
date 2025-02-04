#include <stdio.h>
void main()
{
    int arr1[5];
    int arr2[5];
    printf("enter an array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int j=0;
    for(int i=4;i>=0;i--)
    {
        arr2[j]=arr1[i];//copy array 1 to array2 
        j++;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",arr2[i]);//print array 2
    }
}