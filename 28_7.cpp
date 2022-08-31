#include<iostream>
using namespace std;
template <class T>
void display (T t1)
{
    cout << "displaying template"<<t1<<"\n";
} // namespace std
template <class T1,class T2>
void display (T1.t1,T2.t2)
{
    cout << "displaying 1 template :"<<t1<<"\t"<<t2<<"\n";
}
int main()
{
    dis play(200);
    display(12.400);
    display('G');
    display('G', 1.25);
    display('X' 25);
    display(25, 1.25);
    return 0;
}