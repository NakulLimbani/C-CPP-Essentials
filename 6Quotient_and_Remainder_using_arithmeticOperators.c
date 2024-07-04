#include <stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;
    printf("\nEnter Dividend:");
    scanf("%d",&dividend);
    printf("\nEnter Divisor:");
    scanf("%d",&divisor);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    printf("\nThe Quotient Is:%d",quotient);
    printf("\nThe Reamainder Is:%d",remainder);
    return 0;
}