#include <stdio.h>
int main()
{
    int num,ans;
    printf("Enter A Number:\n");
    scanf("%d",&num);
    ans=num/10;
    printf("The Final Number After Removing Last Digit Is:%d\n",ans);
    return 0;
}