#include<iostream>

using namespace std;

void maxmin(int arr[], int size){
        int max = arr[0];
        int min = arr[0];
        for(int i = 0;i<size; i++){
            if(max<arr[i]){
                max = arr[i];
            }
            if(min>arr[i]){
                min = arr[i];
            }
        }
        cout<<"The maximum number is: "<<max<<endl;
        cout<<"The minimum number is: "<<min;
    }
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    maxmin(arr, n);
    return 0;
}