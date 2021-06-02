#include <stdio.h>
int main()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of array\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter  the element you want to search\n");
    int s;
    scanf("%d",&s);
    int f=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==s)
        {
            printf("%d is found in position %d\n",s,(i+1));
            f++;

        }
    }
    if(f==0)
        printf("NOT FOUND");

    return 0;
}
