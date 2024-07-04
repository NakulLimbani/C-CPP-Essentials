#include <stdio.h>
int main()
{
    float a,r;
    printf("Enter The Radius Of A Circle:\n");
    scanf("%f",&r);
    a=3.14*(r*r);
    printf("An Area Of A Circle is:%f\n",a);
    return 0;
}