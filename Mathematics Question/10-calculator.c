//this code with if else 
#include <stdio.h>

void main()
{
    int num1,num2,num3,result,operator;

    printf("\n enter the number1 :");
    scanf("%d",&num1);
    printf("\n enter the number2 :");
    scanf("%d",&num2);
    printf("\n enter the number3 :");
    scanf("%d",&num3);
    printf("\n enter operator here(+,-,*,/,) : ");
    scanf("\n %c",&operator);

    switch (operator)
    {
        case '+':printf("\n addition of numbers : %d",result=num1+num2+num3);
        break;

        case '-':printf("\n subtraction of numbers : %d",result=num1-num2-num3);
        break;

        case '*':printf("\n multiplication of numbers : %d",result=num1*num2*num3);
        break;

        case '/':printf("\n division of numbers : %d",result=num1/num2/num3);
        break;
    }
    
}