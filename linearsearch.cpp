#include<iostream>
using namespace std;

bool l_S(int num[], int n, int se){
    for(int i=0; i<n; i++){
        if(num[i] == se){
            return 1;
        }
    }
    return 0;

}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    int se;
    cout<<"Enter the key to be searched:"<<endl;
    cin>>se;

    bool found = l_S(num, size, se);

    if (found){
        cout<<"Yes, element is present"<<endl;
    } else{
        cout<<"No, elemnt is not present"<<endl;
    }
}