#include<stdio.h>
void main()
{
    int num1;
    int num2;
    int num3;
      printf("\n enter the number1 :");
    scanf("%d",&num1);
    printf("\n enter the number2 :");
    scanf("%d",&num2);
    printf("\n enter the number3 :");
    scanf("%d",&num3);
    
  if(num1>=num2 && num1>=num3)
  {
    printf("\n number 1 is the maximum number :%d",num1);
  } 
  else if (num2>=num1 && num2>=num3)
  {
    printf("\n number 2 is the maximum number : %d",num2);
  }
  else if (num3>=num1 && num3>=num2)
  {
    printf("\n number 3 is the maximum number :%d",num3);
  }

}