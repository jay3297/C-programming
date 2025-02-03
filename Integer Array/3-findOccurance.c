#include<stdio.h>
void main()
{   
    int arr[10];
    int key;
    int count = 0;
    printf("Enter the key :");
    scanf("%d",&key);
    printf("enter integer array :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]==key){
            printf("\n key :%d",i);
            count++;
        }
    }
    printf("\n key occurence  :%d",count);
        
}