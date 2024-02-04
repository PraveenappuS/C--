#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the ch: "<<endl;
    cin>>ch;
    if (isupper(ch)){
        cout<<"Ch is UPPERCASE";
    }
    else if (islower(ch)){
        cout<<"Ch is Lowercase";
    }
    else{
        cout<<"ch is Numeric value";
    }
}
