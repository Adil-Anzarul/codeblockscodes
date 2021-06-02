#include<stdio.h>
void main()
{
    printf("Enter a String \n");
    char str[100];
    gets(str);
    int p1=0,p2=0,p3=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65 && str[i]<= 90)||(str[i]>=97 && str[i]<= 122))
            p1+=1;
        if(str[i]>=48 && str[i]<= 57)
           p2+=1;
        if((str[i]>=33 && str[i]<= 47)||(str[i]>=123 && str[i]<= 126)||(str[i]>=91 && str[i]<= 96))
           p3+=1;
    }
    printf("Number of Alphabets = %d\n",p1);
    printf("Number of Digits %d\n",p2);
    printf("Number of special character =%d\n",p3);
}
