#include<stdio.h>

void main()
{
    float Temprature;
    printf("\n enter the Temprature in celcius :");
    scanf("\n %f",&Temprature);
    float fahrenhit =(Temprature *9/5)+32.2;
    printf("\n Fahrenhit :%0.1f",fahrenhit);
}