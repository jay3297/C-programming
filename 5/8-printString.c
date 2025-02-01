//write a program to take string as input and print the string .
#include<stdio.h>
void main()
{
    char arr[5];
    printf("enter the string :");
    for(int i=0;i<5;i++)
    {
        scanf("%c",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        char username =arr[i];
        printf("%c",username);
    }
}