#include <iostream>
using namespace std;


int main()
{
    int a,b,c=0;

    
    cout<<"Enter Value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"After swaping:"<< a << c << endl;
    return 0;
}


