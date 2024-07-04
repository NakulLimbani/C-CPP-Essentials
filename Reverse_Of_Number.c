#include <stdio.h>
int main()
{
    int rev = 0,num;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    while (num > 0)
     {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("%d",rev);
    return 0;
}