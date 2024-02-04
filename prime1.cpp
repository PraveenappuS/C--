#include<iostream>
using namespace std;

int isprime(int num){
    if (num<=1){
        return 0;
    }
    else{
        for(int i = 2; i<num; i++){
            if(num%i == 0){
                return 0;
                break;
        }
    }
    return 1;
}
}

int counting(int start, int end){
    int count = 0;
    for(int x = start; x<=end; x++){
        if(isprime(x)==1){
            count = count + 1;
        }
    }
    return count;
}
int main(){
    int start;
    cout<<"Enter the starting range: "<<endl;
    cin>>start;

    int end;
    cout<<"Enter the ending range: "<<endl;
    cin>>end;

    cout<<"The number of primes in given range are: "<< counting(start, end);

    return 0;
}