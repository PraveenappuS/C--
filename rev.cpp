#include<iostream>
using namespace std;

int rev(int num){
    int rev = 0;
    int rem;
    
    while(num>0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    return rev;
}

int main(){
    int num;
    cin>>num;
    cout<<rev(num);
}