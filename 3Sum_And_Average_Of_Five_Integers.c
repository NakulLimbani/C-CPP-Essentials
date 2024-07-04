#include <stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    printf("Enter Any Five Integers:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    printf("The Sum Is:%f",f);
    g=f/5;
    printf("An Average Is:%f",g );
    return 0;
}