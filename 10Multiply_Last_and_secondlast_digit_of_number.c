#include <stdio.h>
int main()
{
    int num,ans,a,b;
    printf("Enter Any Number:\n");
    scanf("%d",&num);
    a=((num%100)/10),b=(num%10),ans=a*b;
    printf("The Value Of Multiplication Of Last And Second Last Digit Is:\n(%d*%d)=%d",a,b,ans);
    return 0;
}