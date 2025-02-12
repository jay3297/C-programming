#include<stdio.h>
void main()
{
    for(int i=5;i>=1;i--)//rows
    {
        for(int j=5;j>=i;j--)//space
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)//manage how many * print 
        {
            printf("*");
        }
        printf("\n");
    }
}