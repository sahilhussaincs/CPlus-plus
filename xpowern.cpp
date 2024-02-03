#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int x, n, result;
    cout<<"Enter Value of X: ";
    cin>>x;
    cout<<"Enter Value of N: ";
    cin>>n;

    result =pow(x,n);
    cout<<"Here is the Result: "<<result;
    return 0;
}