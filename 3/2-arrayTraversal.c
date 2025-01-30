//Array traversal :- traverse an integer array and print all the elements of array .take input from the user. 
#include <stdio.h>
void main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("\n enter the number :");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        int var =arr[i];
        printf("\n%d",var);
        
    }
}