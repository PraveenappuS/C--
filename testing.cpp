#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str = "thisiscool";
    int len;
    len = str.length();
    for(int i = len; i>=0; i--){
        cout<<str[i];
    }
    return 0;
}