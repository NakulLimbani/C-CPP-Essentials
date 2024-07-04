#include<stdio.h>
int main( )
{
int age;
printf("Enter Age of Candidate:\n");
scanf("%d", &age);
if (age>=18)
printf("The Candidate is Eligible\n");
else
printf("Sorry, Candidate not Eligible\n");
return 0;
}