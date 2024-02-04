#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the base value: "<<endl;
    cin>>a;
    cout<<"Enter the power value: "<<endl;
    cin>>b;
    int ans=1;
    for(int i=1; i<=b;i++){
        ans = ans*a;
    }
    cout<<"The value of "<<a<<" power "<<b<< " is: "<<ans<<endl;
}