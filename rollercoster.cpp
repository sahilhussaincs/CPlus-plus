#include <iostream>
using namespace std;

int main() {
    int t;
    cout<<"Enter T Value:\n";
    cin>>t;
    while(t--)
    {
    int x,h;
    cout<<"Enter Minimum Height and Boy Height:\n";
    cin>>x>>h;
    
    if ((x-h) >= 0)
    {
       cout<<"Yes\n";
       
    }
    else
    {
       cout<<"No\n";
    }
    }
    
	return 0;
}