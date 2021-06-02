/*
local and global variable
first local is considered
we use :: operator to access global variable
*/
#include<iostream>
using namespace std;
int glob=100;//global var
int main()
{   int glob=50;//local var
    std::cout<<"Hello World"<<endl;
    cout<<(glob)<<endl;
    cout<<(::glob)<<endl;
    glob=10;
    ::glob=54;
    cout<<(glob)<<endl;
    cout<<(::glob)<<endl;
    return 100;
}
