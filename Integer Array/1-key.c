#include<stdio.h>
void main()
{   
    int arr[10];
    int key;
    int keyFound =0;//flag 
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
        keyFound=1;//unflag 
        } 
    }
    if(keyFound)
    {
        printf("\n key found in array :");
    }
    else{
        printf("\n key is not found return -1");
    }
        
}