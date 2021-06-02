#include <stdio.h>
int main()
{
printf("Enter the marks of 5 subjects of a student\n");
int marks[5];
int sum=0;
for(int i=0;i<5;i++)
{
    scanf("%d",&marks[i]);
    sum+=marks[i];
}
float av=(float)sum/5;
printf("Average marks of 5 subject is= %f",av);
return 0;
}
