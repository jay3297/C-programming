#include<stdio.h>
void main()
{   
    int arr[10];
    int sum = 0;
    int multiplication = 1;
    printf("enter integer array :");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum +=arr[i];
        multiplication *= arr[i];

    }
    if(sum>=multiplication){
            printf("\n sum major :%d",sum);
        }
        else{
            printf("\n multiplication major :%d",multiplication);
        }
       
}