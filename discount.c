#include<stdio.h>
  //#include<conio.h>
  void main()
  {
  //clrscr();
  int n;
  float q;
  printf("Enter price of each quantity\n");
  scanf("\n%f",&q);
  printf("\nEnter no. of quantity you buy\n");
  scanf("\n%d",&n);
  float price = n*q;
  if(price >=1000)
  {
  price=0.9*price;
  }
  printf("You will have to pay %f\n",price);
  //getch();
  }
