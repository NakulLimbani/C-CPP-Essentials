#include <stdio.h>
int main()
{
    int rev = 0,num,orig;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    orig=num;
    while(num>0)
     {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("The rev of number is: %d\n",rev);
    if (orig==rev)
    printf("The Number is palindrom %d\n",orig);
    else
    printf("The Number is not a palindrom %d\n",orig);
    return 0;
}