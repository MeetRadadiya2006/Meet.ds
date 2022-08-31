#include <iostream> // hybrid
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
class C
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
class D:public B,public C
{
    public:
    D()
    {
        cout<<"\n D constructor:";
    }
    ~D()
    {
        cout<<"\n d destructor:";
    }
};
int main()
{
    D d;
}