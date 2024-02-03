#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int i;
    int num;
    cout<<"Generating Random Number Below: \n\n";
    for(i=0;i<=10; i++)
    {
        num=rand()%100;
        cout<<" "<<num<<" ";

    }
    cout<<"\n";
    return 0;
}