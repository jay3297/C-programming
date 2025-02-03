// Take integer array as input from user .print no of even number and no of odd numbers in array 
#include<stdio.h>
void main()
{
    int arr[5];
    printf("enter the number :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
        {
            int var =arr[i];
            if (var%2==0)
            {
                printf("\n even number %d",arr[i]);
            }
            else{
                 printf("\n odd number %d",arr[i]);
            }
        }

}