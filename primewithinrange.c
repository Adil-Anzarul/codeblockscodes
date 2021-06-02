#include <stdio.h>
int main()
{
int flag;
for(int i=20;i<=40;i++)
{flag=0;
for(int j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag== 0)
printf("%d is prime\n",i);
}
return 0;
}
