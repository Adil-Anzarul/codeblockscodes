#include<stdio.h>
void main()
{
    printf("Enter a string\n");
    char str[100];
    gets(str);
    printf("Enter a character u wanna search in string\n");
    char a;
    scanf("%c",&a);
    int frequency=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==a)
        {
            frequency+=1;

        }

    }

    printf("The Character ' %c ' occours in entered string %d times",a,frequency );


}
