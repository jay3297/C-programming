#include<stdio.h>
void main()
{   
    int arr[10];
    int key;
    int var;
    printf("Enter the key :");
    scanf("%d",&key);
    printf("enter integer array :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        var =arr[i];
        // printf("\n %d",var);
        if(arr[i]==key)
        {
        printf("\n key index of array  : %d",i);
        break;
        } 

    }
     if(var!=key)
    {
        printf("\n key is not found ");
    }
        
}