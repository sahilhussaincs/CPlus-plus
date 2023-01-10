#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cout<<"Enter testcase:"<<endl;
	cin>>t;
	while(t--)
	
	{
	    int x,y;
        cout<<"Value of x and y:"<<endl;
        cin>>x>>y;
	    
	    if(x==y)
	    cout<<x<<endl;
	    else if(x>y)
	    cout<<x/y<<endl;
	    else if(x<y)
	    cout<<x<<endl;
	}
	return 0;
}