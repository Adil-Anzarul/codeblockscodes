#include<stdio.h>
int main()
{
    printf("Enter the number up to which u want to find prime number\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=i+1;
    }



    int h=0;
    while( h < n)
    {
        int t=arr[h];
        for(int i=h+1; i<n; i++)
        {
            if(arr[i]%t==0)
            {
                arr[i]=0;
            }
        }


        h++;
    }


    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
            printf(" %d is prime\n",arr[i]);
    }

    return 0;
}
