#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter Year"<<endl;
    cin>>year;

    int month;
    cout<<"Enter Month"<<endl;
    cin>>month;

    if(month == 1,3,5,7,8,10,12)
    cout<<"31"<<endl;
    else if(month == 2)
    cout<<"30"<<endl;
    else
    cout<<"28"<<endl;

    return 0;

}