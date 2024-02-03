#include <iostream>
using namespace std;

int main(){

    int x[2][3];
    cout<<"Enter Your Numbers:"<<endl;
    for(int i = 0; i<2; i++){
        for(int j=0; j<3; j++){
    
           cin>>x[i][j];
        }
    }
        
    cout<<"Your Array:"<<endl;
    for(int i = 0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << "numbers[" << i << "][" << j << "]: " <<x[i][j] << endl;
        }
    }
 
}
