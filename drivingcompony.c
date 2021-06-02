#include<stdio.h>
#include<string.h>
typedef struct travel_agengy
{
    char name[34];
    int drivingl[34];
    char route[34];
    char distance[5];
} ta;
ta e1,e2,e3;

void input()
{
    int temp[34];
    printf("Enter following details for driver 1\n");
    printf("Enter \n name \n driving licence number \n route name \n distance\n");
    gets(temp);
    strcpy(e1.name,temp);
    gets(temp);
    strcpy(e1.drivingl,temp);
    gets(temp);
    strcpy(e1.route,temp);
    gets(temp);
    strcpy(e1.distance,temp);
    printf("Enter following details for driver 2\n");
    printf("Enter \n name \n driving licence number \n route name \n distance\n");
    gets(temp);
    strcpy(e2.name,temp);
    gets(temp);
    strcpy(e2.drivingl,temp);
    gets(temp);
    strcpy(e2.route,temp);
    gets(temp);
    strcpy(e2.distance,temp);
    printf("Enter following details for driver 3\n");
    printf("Enter \n name \n driving licence number \n route name \n distance\n");
    gets(temp);
    strcpy(e3.name,temp);
    gets(temp);
    strcpy(e3.drivingl,temp);
    gets(temp);
    strcpy(e3.route,temp);
    gets(temp);
    strcpy(e3.distance,temp);
}
void  show()
{
    printf("The details of 1st driver is as follow\n");
    puts(e1.name);
    puts(e1.drivingl);
    puts(e1.route);
    puts(e1.distance);

    printf("The details of 2nd driver is as follow\n");
    puts(e2.name);
    puts(e2.drivingl);
    puts(e2.route);
    puts(e2.distance);

    printf("The details of 3rd driver is as follow\n");
    puts(e3.name);
    puts(e3.drivingl);
    puts(e3.route);
    puts(e3.distance);


}
void main()
{

    input();
    show();

}
