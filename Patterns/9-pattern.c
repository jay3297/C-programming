#include <stdio.h>
void main()
{
    for(int row=5;row>=0;row--)
    {
        for(int col=0;col<row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(int row=0;row<=5;row++)
    {
        for(int col=0;col<row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}