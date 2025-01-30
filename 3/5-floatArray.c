//write a program to traverse an float array in reverse .take array input from user 
#include<stdio.h>
void main()
{
    float arr[5];
    printf("enter the float numbers :");
    for(int i=0;i<5;i++)
    {
        scanf("%f",&arr[i]);
    }

    for(int i=5;i>0;i--)
    {
    float var = arr[i];
    printf("\n %0.1f",var);
    }
}