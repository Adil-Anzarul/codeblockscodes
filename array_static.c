#include<stdio.h>
int *  display();
void main()
{
    int *p;
    p=display();
    for(int i=0;i<10;i++)
    {
        printf("%d\n",*(p+i));
    }
}

int *  display()
{
    static int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Displaying\n");
    return arr;
}
