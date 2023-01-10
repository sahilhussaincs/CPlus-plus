#include <iostream>
using namespace std;

int main()
{
    int t;
    cout<<"Ener Value of Test Cases:"<<endl;
    cin>>t;
    while(t--)
    {
        int n,m;
        cout<<"Enter Value of Person and Left Shoes"<<endl;
        cin>>n>>m;

        if(m>=n)
        cout<<m<<endl;
        else if(m<n)
        cout<<(n-m)+n<<endl;
        else if(n=m<0)
        cout<<(n*2)<<endl;
        else
        cout<<n<<endl;


    }
}