#include <iostream>
using namespace std;

int main()

{
    char op;
    double num1,num2;

    
    
    cout<<"Lets Calculate: ";

    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter operator: ";
    cin>>op;
    cout<<"Enter Second Number: ";
    cin>>num2;
    switch(op){
        case '+':
        cout<<"Result = "<<num1+num2;
        break;

        case '-':
        cout<<"Result = "<<num1-num2;
        break;

        case '*':
        cout<<"Result = "<<num1*num2;
        break;

        case '/':
        cout<<"Result = "<<num1/num2;
        break;

        default:
        cout<<"Error Operator!";
        break;



    }
    return 0;
}