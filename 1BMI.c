#include <stdio.h>
int main()
{
    float w,h,B;
    printf("Enter Your Body Weight In Kg:\n");
    scanf("%f",&w);
    printf("Enter Your Height in Meters:\n");
    scanf("%f",&h);
    B=w/(h*h);
    printf("Your Body Mass Index Is:%f\n",B);
    return 0;
}