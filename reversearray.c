/*  This programme will reverse array*/

#include <stdio.h>

void arrRev(int a[],int n)
{
    int temp;
    for (int i = 0; i <n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n-1 - i];
        a[n-1 - i] = temp;
    }
}
void main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    arrRev(arr,n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}
