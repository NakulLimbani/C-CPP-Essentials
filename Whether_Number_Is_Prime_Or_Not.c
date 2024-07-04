#include<stdio.h>
void main( )
{
int n,i,f=0;
printf("Enter the number: ");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
  if(n%i==0)
   {
     f=1;
     break;
   }
}

if(f==0)
   printf("The given number is prime");
else
   printf("The given number is not prime");
}