#include <iostream>
using namespace std;

int main ()
{
    int days, weeks, month;
    cout<<"Enter Days: ";

    cin>>days;

    cout<<"Weeks:"<<days/7;
    cout<<" & Month:"<<days/30;
    return 0;
}