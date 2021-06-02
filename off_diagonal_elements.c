/*To find sum of off-diagonal elements*/
#include<stdio.h>
void main()
{
    printf("Enter the size of square matrix\n");
    int n;
    scanf("%d",&n);
    int a[n][n];
    int sumO=0;
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        sumO+=a[i][n-1-i];
    }
    printf("Sum of off-diagonal elements = %d ",sumO);
}
