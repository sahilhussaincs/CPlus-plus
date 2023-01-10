#include <iostream>
using namespace std;

int main()
{
    int sum(int a, int b=10, int c=15, int d=20);
    int a=2;
    int b= 3;
    int c= 4;
    int d= 5;

    cout<<sum(a,b,c,d);
    cout<<sum(a,b,c);
    cout<<sum(a,b);
    cout<<sum(a);
    cout<<sum(b,c,d);

    

    
    return 0;
}
