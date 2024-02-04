#include<iostream>


using namespace std;

int sum(int arr[], int n){
    int s = 0;
    for(int i=0; i<=n; i++){
        s = s + arr[i];
    }
    return s;
}

int main(){
    int size;
    cin>>size;

    int arr[100];

    for(int i=0; i<=size; i++){
        cin>>arr[i];
    }
    cout<<"The sum of the array is: "<<sum(arr, size);
}