#include<stdio.h>
void main()
{
    printf("Enter value of room\n");
    int room;
    scanf("%d",&room);
    switch(room)
    {
    case 1:
        printf("Director");
        break;
    case 2:
        printf("Deputy Director");
        break;
    case 3:
        printf("Assistant Director");
        break;
    default:
        printf("General Manager");
    }

}
