#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    if(a%3==0)
	    {
	        cout<<"0"<<endl;    
	    }
	    else
	    {
	        int num=a,sum=0;
	        while(num!=0)
	        {
	            int rem=num%10;
	            sum=sum+rem;
	            num/=10;
	        }
	        int j=1;
	        for(;;)
	        {
	            if(3*j>sum)
	            {
	                cout<<3*j-sum<<endl;
	                break;
	            }
	            else
	                j++;
	        }
	    }
	}
	return 0;
}
