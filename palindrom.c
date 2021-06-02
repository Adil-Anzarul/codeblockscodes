/* this program is gonna find weather a no. is palindrom or not */
#include <stdio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
int m=n;
int rev=0;
for(;n;n=n/10)
{
rev=rev*10+(n%10);
}
if(rev==m)
printf("%d is palindrome",m);
else
printf("%d is not a palindrome",m);
return 0;
}
