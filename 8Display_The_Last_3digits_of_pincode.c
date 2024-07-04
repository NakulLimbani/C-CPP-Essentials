#include <stdio.h>
int main()
{
int pincode,ltd;
printf("Enter The 6 Digits Pincode:\n");
scanf("%6d",&pincode);
ltd=pincode%1000;
printf("The Last Three Digits Of Pincode:%d\n",ltd);
return 0;
}
