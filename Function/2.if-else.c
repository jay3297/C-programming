#include <stdio.h>

int func(int,int,char,int);

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
    int result=func(num1,num2,operator,result);
    
    
}

int func(int num1,int num2,char operator,int result)
{
    if(operator =='+')
    {
        printf("\n addition of two numbers %d",result=num1+num2);
    }
    else if(operator =='-')
    {
       printf("\n subtraction of two numbers %d",result=num1-num2); 
    }
    else if(operator =='*')
    {
       printf("\n multiplication of two numbers %d",result=num1*num2); 
    }
    else if(operator =='/')
    {
       printf("\n division of two numbers %d",result=num1/num2); 
    }
    return result;
}