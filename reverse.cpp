#include<iostream>
using namespace std;


void reverse(int num[], int n){
    int start = 0;
    int end = n-1;
    while (start<=end){
        swap(num[start], num[end]);
        start++;
        end--;
    }
}

void printarray(int num[], int n){
    for (int i = 0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cin>>size;

    int num[100];
    for (int i=0; i<size; i++){
    }

    reverse(num, size);
    printarray(num, size);

}