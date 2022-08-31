#include<iostream>
using namespace std;
class bank
{
    int balance;

public:
    bank(int);
    void deposit(int);
    void withdraw(int);
    int showbalance();
};
bank::bank(int amt)
{
    balance = amt;
}
void bank::deposit(int amt)
{
    balance=balance+amt;
}
void bank::withdraw(int amt)
{
    balance=balance-amt;
}
int bank::showbalance()
{
    return balance;
}
int main()
{
    int z,y,i;
    float mo;
    string name;
    cout<<"\nenter you name :";
    cin >>name;
    cout<<"\nenter your moblie number :";
    cin>>mo;
    cout<<"\n\t  ****** Hi "<<name;
    cout<<" ******" ;
    cout<<"\n Savings = 1\n Current = 2 \n Exit = 0";
    cout<<"\nenter your coice :";
    cin>>z;
    switch (z)
    {
        case 1 :
        {
            cout<<"password :";
            cin>>y;            
            {
                if(y>1233&&y<1235)
                {
                    int o;
                    bank meet(1000);
                    cout<<"your saving accunt name is : Meet";
                    cout << "\n\nyour Balance :" << meet.showbalance();
                    do
                    {
                        cout << "\nChoose from Following \n1.Deposit \n2.Withdraw \n0.Exit \nOption:";
                        cin >> o;
                        if (o == 0)
                        {
                            cout << "\n\nyour Balance :" << meet.showbalance();
                            break;
                        }
                        switch (o)
                        {
                            case 1:
                                int n;
                                cout << "\n Enter the amount of deposit :";
                                cin >> n;
                                meet.deposit(n);
                                cout << "\n now your Balance :" << meet.showbalance();
                            break;
                            case 2:
                                int n2;
                                cout << "\n Enter the amount of withdraw :";
                                cin >> n2;
                                meet.withdraw(n2);
                                cout << "\n now your Balance :" << meet.showbalance();
                            break;
                            default:
                            cout << "\n     can't allowed     \n";
                            break;
                        }
                    } while (o <= 50);
                }
                else
                {
                    cout <<"error";
                }
            }
        }
        case 2 :
        {
            cout<<"passord :";
            cin>>y;
            if(y>1233&&y<1235)
            {
                int o;
                cout<<"your current accunt name is : Sandip";
                bank sandip(4951);
                cout << "\n\nyour Balance :" << sandip.showbalance();
                do
                {
                    cout << "\nChoose from Following \n1.Deposit \n2.Withdraw \n0.Exit \nOption:";
                    cin >> o;
                    if (o == 0)
                    {
                        cout << "\n your Balance :" << sandip.showbalance();
                        break;
                    }
                    switch (o)
                    {
                        case 1:
                            int n;
                            cout << "\n Enter the amount of deposit :";
                            cin >> n;
                            sandip.deposit(n);
                            cout << "\n now your Balance :" << sandip.showbalance();
                        break;
                        case 2:
                            int n2;
                            cout << "\n Enter the amount of withdraw :";
                            cin >> n2;
                            sandip.withdraw(n2);
                            cout << "\n now your Balance :" << sandip.showbalance();
                        break;
                        default:
                            cout << "\n     can't allowed     \n";
                        break;
                    }
                } while (o <= 50);
            }
            else
            {
                cout <<"error";
            } 
        }       
    }
}