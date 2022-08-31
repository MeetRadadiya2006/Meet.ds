#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream meet("file.txt");
    if (meet.is_open())
    {
        meet<< "Welcome to skillqode"<<endl;
        meet<< "\nWe started new lab";
        meet<< "\nWe started new branch";
        meet.close();
    }
    else
        cout << "File opening is fail.";
    return 0;
}