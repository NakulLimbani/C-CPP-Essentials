#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Value Of a:\n");
    scanf("%d",&a);
    printf("Enter Value of b:\n");
    scanf("%d",&b);
    printf("Value of a is %d and b is %d before swapping.\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("The Value Of a is:%d\n",a);
    printf("The Value Of b is:%d\n",b);
    return 0;

}       
