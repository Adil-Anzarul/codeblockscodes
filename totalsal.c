#include<stdio.h>
//#include<conio.h>
void main()
{
//clrscr();
float BS,DA,HRA;
printf("\nEnter your basic salary");
scanf("\n%f",&BS);
if(BS < 5000)
{
DA=0.7*BS;
HRA=0.1*BS;
}
else
{
DA=0.75*BS;
HRA=1000;
}
float total=BS+DA+HRA;
printf("\nTotal salary is %f ",total);
//getch();
}
