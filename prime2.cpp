#include<iostream>
using namespace std;

void prime(int start,int end){
    int f;
    for(int i = start; i<=end; i++){
        if(i==1 || i==0){
            continue;
        }
        f = 1;
        for(int j = 2; j<=i/2;++j){
            if(i%j == 0){
                f=0;
                break;
            }   
        }
        if(f == 1){
            cout<<i<<" ";
        }
    }
}

int main(){
    int start;
    cin>>start;

    int end;
    cin>>end;

    prime(start, end);

    return 0;

}