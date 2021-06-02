#include <stdio.h>
int main()
{
int i=1,pro=1;
int n;
printf("Enter a number you want to find factorial of\n");
scanf("%d",&n);
while(i<=n)
{
pro=pro*i;
i++;
}
printf("Factorial %d =%d",n,pro);
return 0;
}
