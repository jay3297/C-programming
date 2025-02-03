#include<stdio.h>
void main()
{   
    int arr[10];
    int key;
    printf("Enter the key :");
    scanf("%d",&key);
    printf("enter integer array :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
        printf("\n key index of array  : %d",i);
        } 
        else if (arr[i]!=key)
        {
            printf("\n key is not found :",-1);
        }

    }
        
}