#include <stdio.h>
int main()
{
int n ,i=1;
int pro=1;
printf("Enter no. you want to find factorial of\n");
scanf("%d",&n);
do{
pro=pro*i;
i++;
} while(i<=n);
printf("Factorial %d = %d",n,pro);
return 0;
}
