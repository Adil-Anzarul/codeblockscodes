#include<iostream>
using namespace std;
class Emp
{
private:
    int a=10,b=20;
public:
    int c=100,d=500;
void get(int x,int y)
{
    a=x;
    b=y;

}
void print_a_and_b(void);
};
void Emp :: print_a_and_b()
{
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
}

int main()
{   Emp adil;

    adil.print_a_and_b();
    //cout<<"The value of a is "<<a<<endl;
    //cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<adil.c<<endl;
    cout<<"The value of d is "<<adil.d<<endl;



}
