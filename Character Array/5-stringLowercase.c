#include<stdio.h>
void main()
{
    char arr[50];
    int count=0;
    printf("Enter the strig :");
    for(int i=1;i<=50;i++)
    {
        scanf("%c",&arr[i]);
        count++;
        if(arr[i]==10)
        {
            break;
        }
    }
    for(int i=1;i<count;i++)
    {
        arr[i]=arr[i]+32;
        printf("%c",arr[i]);
    }

}