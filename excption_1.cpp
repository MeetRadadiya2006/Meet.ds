#include <iostream>
using namespace std;
int main()
{
    int p, c, m, err = 0;
    string name;
    do
    {
        try
        {
            cout << "Enter student name:" << endl;
            cin >> name;
            cout << "Enter the physics marks:" << endl;
            cin >> p;
            if (!(p >= 0 && p <= 100))
            {
                throw(p);
            }
            cout << "Enter the maths marks:" << endl;
            cin >> m;
            if (!(m >= 0 && m <= 100))
            {
                throw(m);
            }
            cout << "Enter the chemistry marks:" << endl;
            cin >> c;
            if (!(c >= 0 && c <= 100))
            {
                throw(c);
            }
            err = 0;
        }
        catch (int e)
        {
            cout << "Invalid Marks!" << endl;
            err = 1;
        }
    } while (err);
}