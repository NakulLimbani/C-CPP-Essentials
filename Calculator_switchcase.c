#include <stdio.h>
int main()
{
    int ch;
    float a,b;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: 
        printf("\nEnter Two Numbers: ");
        scanf("%f %f",&a,&b);
        printf("The Sumation of (%.2f + %.2f) is: %.2f",a,b,(a+b));
        break;
        
        case 2: 
        printf("\nEnter Two Numbers: ");
        scanf("%f %f",&a,&b);
        printf("The Subtraction of (%.2f - %.2f) is: %.2f",a,b,(a-b));
        break;
        
        case 3: 
        printf("\nEnter Two Numbers: ");
        scanf("%f %f",&a,&b);
        printf("The Mutiplication of (%.2f * %.2f) is: %.2f",a,b,(a*b));
        break;
        
        case 4: 
        printf("\nEnter Two Numbers: ");
        scanf("%f %f",&a,&b);
        printf("The Division of (%.2f / %.2f) is: %.2f",a,b,(a/b));
        break;
        
        default:
        printf("Wrong Input Choice");
        break;

    }
    return 0;

}