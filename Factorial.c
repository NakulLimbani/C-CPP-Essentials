#include <stdio.h>
void main()
{
    int x= 5;
    int i,fact=1,num;
    printf("Enter any number:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("The Factorial Of %d is:%d\n",num,fact);
    }