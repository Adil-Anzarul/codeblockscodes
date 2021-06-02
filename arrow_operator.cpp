#include<iostream>
using namespace std;
int main()
{
    int a[3]= {10,20,30};
    int *p1=a;
    for (int i=0; i<3; i++)
        cout<<*(p1+i)<<endl;
    int *ptr=a;
    for(int i=0; i<3; i++)
    {
        cout<<*ptr<<endl;
        ptr+=1;
    }
    //cout<<p1->
    return 100;
}
