#include <iostream>
using namespace std;

int main() {
	int t;
    cout<<"Enter Test Case:";
	cin>>t;
	while(t--)
	{
	    int x, y;
        cout<<"Enter Wallet Money and then bill:"<<x<<y<<endl;
        cin>>x>>y;
	    if(x>=y)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}