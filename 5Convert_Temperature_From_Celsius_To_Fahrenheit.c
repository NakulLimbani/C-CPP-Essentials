#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("\n\nEnter Temperature Value In Celsius:");
    scanf("%f",&celsius);
    fahrenheit=((celsius*9)/5)+32;
    printf("\n\nThe Value Of Temperature In Fahrenheit Is:%.2f",fahrenheit);
    return 0;
}