#include <stdio.h>
void main()
{
    int a,b,r,c,i;
    a=0;
    b=1;
    printf("Enter The No. Of Fabonaci Number wanted:\n");
    scanf("%d",&r);
    printf("%d %d ",a,b);
    for(i=0;i<r-2;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}