#include <iostream>
using namespace std;

int maximum(int num[], int n){
    int max = INT8_MIN;
    for (int i=0; i<n;i++){
        if (num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int minimum(int num[], int n){
    int min = INT8_MAX;
    for(int i = 0; i<n; i++){
        if (num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximum value is:"<<maximum(num, size)<<endl;
    cout<<"Minimum value is:"<<minimum(num, size)<<endl;
}

