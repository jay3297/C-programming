#include<stdio.h>
void main()
{
    int number;
    int factorial = 1;
    printf("enter number :");
    scanf("%d",&number);
    for (int i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial number : %d",factorial);
}