#include<iostream>  //singl
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A constructor:";
    }
    ~A()
    {
        cout<<"\n a destructor:";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"\n B constructor:";
    }
    ~B()
    {
        cout<<"\n b destructor:";
    }
};
int main()
{
    B b;
}

