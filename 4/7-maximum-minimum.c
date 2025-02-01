// write a program to enter an integer array from user and find maximum and minimum element from array.
#include<stdio.h>
void main()
{
    int arr[5];
    printf("Enter the number :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max =arr[0];
    int min =arr[0];
    for(int i=0;i<5;i++)
    {
        int var =arr[i];
        printf(" \n %d",var);
        if(arr[i]>max)
         {
             max=arr[i];
            //  printf("%d",max);
         }
        if(arr[i]<min)
         {
             min=arr[i];
        //     printf("%d",min);
         }

    }
      printf("\n  maximum element : %d",max);
      printf("\n  minimum element : %d ",min);

}