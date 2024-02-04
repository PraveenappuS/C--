#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    if(isupper(ch)){
        cout<<ch<<" is a uppercase letter"<< endl;
    }
    else if(islower(ch)){
        cout<<ch<<" is a lowercase letter"<< endl;
    }
    else{
        cout<<ch<<" is a numeric value"<<endl;
    }
}