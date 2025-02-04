#include <stdio.h>
void main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(row==0 || row==n-1)
            {
                printf("*");
            }
            else{
                if(col==0 || col==n-1)
                {
                    printf("*");
                }
                else{ 
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}