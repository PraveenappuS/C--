#include<iostream>
using namespace std;

bool iseven(int num){
    if(num&1){
        return 0;
    }
    return 1; 
}

int main(){
    int a;
    cin>>a;

    if(iseven(a)){
        cout<<a<<" is Even number."<<endl;
    }
    else{
        cout<<a<<" is an odd number.";
    }
}