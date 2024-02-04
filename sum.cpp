#include<iostream>
using namespace std;

int s = 0;
int sum(int num[], int n){
    for(int i =0; i<n; i++){
        s = s+num[i];
    }
    return s;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"The sum of numbers in num: "<<sum(num, size)<<endl;
}