#include<stdio.h>
void leapyear()
{
    printf("Enter a year\n");
    int n;
    scanf("%d",&n);
    if(n%100!=0)
    {
        if(n%4==0)

            printf("%d is leapyear\n",n);
        else

            printf("%d is not a leapyear\n",n);
    }
    else if(n%100==0)
    {
        if(n%400==0)
            printf("%d is leapyear\n",n);
        else
            printf("%d is not a leapyear\n",n);
    }
    else
        printf("%d is not a leapyear\n",n);
}


void maxm()
{
    int n;
    printf("Enter size of 1-D Array u wanna create\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter element at %d index\n",i);
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(int i=0; i<n; i++)
    {
        if(max<array[i])
            max=array[i];
    }
    printf("The maximum value is = %d\n",max);
}

void main()
{
    printf("enter your choise\n 1-->to find Leapyear\n 2--> to find largest number in array\n");
    int n;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        leapyear();
        break;
    case 2:
        maxm();
        break;
    default:
        printf("Enter a valid choice\n");

    }
}
