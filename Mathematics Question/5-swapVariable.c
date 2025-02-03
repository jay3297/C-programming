#include <stdio.h>
void main()
{
    int num1,num2;
    printf("\n enter the number1 :");
    scanf("%d",&num1);
    printf("\n enter the number2 :");
    scanf("%d",&num2);
    int swap =num1;
    num1 =num2;
    num2=swap;
    printf("\n num 1 :%d",num1);
    printf("\n num 2 : %d",num2);

}