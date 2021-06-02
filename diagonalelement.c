#include <stdio.h>
int main()
{
int n;
printf("Enter the size of n X n sq. matrix\n");
scanf("%d",&n);
int a[n][n];
printf("Enter %d elements of array\n",n*n);
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("The diagonal elements are\n");
for(int i=0;i<n;i++)
{
printf("At index %d,%d is = %d\n",i,i,a[i][i]);
}
return 0;
}
