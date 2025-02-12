#include <stdio.h>

int func(int,int,char);

void main()
{
    int num1,num2;
    char operator;
    printf("\n enter the number1 :");
    scanf("%d",&num1);
    printf("\n enter the number2 :");
    scanf("%d",&num2);
    printf("\n enter operator here(+,-,*,/) : ");
    scanf("\n %c",&operator);
    int result=func(num1,num2,operator);
    printf("%d",result);
}

int func(int num1,int num2,char operator)
{
    switch(operator)
    {
        case '+':
        return num1+num2;
        case '-':
        return num1-num2;
        case '*':
        return num1*num2;
        case '/':
        return num1/num2;
        
    }
}