#include <iostream>
#include<cmath>
using namespace std;
int main()
{   cout << "Prime Numbers between 1 and 100 are:\n";
    for(int i=2;i<=100;++i) 
    {   int number=0; 
        for(int j=2;j<=sqrt(i);++j) 
        {   if(i%j==0)
                number=1; 
        }
        if(number==0) 
                cout<<i<<" ";
    }
    return 0;
}