#include<iostream>

using namespace std;

int main(){

    int a, b;
    char op;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the the operation: "<<endl;
    cin>>op;

    cout<<"Enter the value of b: "<<endl;
    cin>>b; 

    switch(op){
        case '+': cout<<(a+b)<<endl;
        break;

        case '-': cout<<(a-b)<<endl;
        break;

        case '*': cout<<(a*b)<<endl;
        break;
        
        case '/': cout<<(a/b)<<endl;
        break;

        case '%': cout<<(a%b)<<endl;
        break;

        default: cout<<"Please enter the valid operator.";
    }
}