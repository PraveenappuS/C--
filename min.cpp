#include <iostream>
using std:: cout;

void printmain(int ar[5])
{
    int min = ar[0];
    for (int i=0; i<5;i++){
        if (min>ar[i]){
            min = ar[i];
        }
    }
    cout<<"The minimum number in array is "<<min <<std::endl; 
}

int main()
{
    int arr[5] = {30, 20, 10, 40, 50};
    printmain(arr);
}
