#include<iostream>  //multipul
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
class C:public B
{
    public:
    C()
    {
        cout<<"\n C constructor:";
    }
    ~C()
    {
        cout<<"\n c destructor:";
    }
};
int main()
{
    C c;
}