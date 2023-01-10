#include <iostream>
using namespace std;
int main()
{

    int t;
    cout<<"Enter Case:";
    cin>>t;
    while(t--)
    {

    int x,y;

    cout<<"Value Of X and Y:";
    cin>>x>>y;

    if (x > 0 && x == y)
	cout << "YES" << endl;
	else
	cout <<"NO"<<endl;
    }

    return 0;
}