#include <stdio.h>
void main() 
{
   int n, i, arr[15];
   int *ptr;
   printf(" Input the number of elements to store in the array (max 15) : ");
   scanf("%d",&n);
   ptr = &arr[0];  // ptr stores the address of base array arr
   for(i=0;i<n;i++)
      {
	  scanf("%d",ptr);//accept the address of the value
      ptr++;
	  } 	
	
   ptr = &arr[n - 1];

   printf("\n The elements of array in reverse order are :");

   for (i = n; i > 0; i--) 
   {
      printf("\n %d  ", *ptr);
      ptr--;
   }
printf("\n");
}