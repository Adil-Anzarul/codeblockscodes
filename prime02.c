//wap to print prime no. within given range
#include <stdio.h>
int main()
{
int m,n;
printf("You want to print prime no from m to n\n");
printf("Enter m\n");
scanf("%d",&m);
prinf("Enter n");
scanf("%d",&n);
for(int i=m,flag=0;i<=n;i++)
{
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
if(flag==0)
printf("%d is prime\n",i);
}
}
return 0;
}
