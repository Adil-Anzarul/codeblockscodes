#include<stdio.h>
#include<string.h>
int main()
{
printf("Enter a string\n");
char str[100];
gets(str);
int i;
for(i=0;str[i]!='\0';i++);

printf("The length of entered string is =%d",i);

return 100;
}
