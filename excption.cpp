#include <iostream>
using namespace std;
double zerodivion(int x,int y){
    if (y==0){
        throw "division by zero !";
    }
    return 0;
}
int main (){
    int a = 11;
    int b = 0;
    double c = 0;
    try {
        c = zerodivion(a, b);
        cout << c << endl;
    }
    chtch (constchar * message){
        cerr << message << endl;
    }
    return 0;
}