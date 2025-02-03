#include <stdio.h>
void main()
{
    int height;
    int base;
    printf("\n enter the height : ");
    scanf("\n %d",&height);
    printf("\n enter the base : ");
    scanf("\n %d",&base);
    int area = height*base/2;
    printf("\n area of right angle tringle is : %d ",area);
}