#include<iostream>
using namespace std;

int fact(int num){
    int fa = 1;
    for(int i=1; i<=num;i++){
        fa = fa * i;
    }
    return fa;
}

int nCr(int n, int r){
    int nume = fact(n);
    int denome = fact(r)*fact(n-r);
    return nume/denome; 
}


int main(){
        while(1){
        int n, r;
        cin>>n>> r;
        int ans;
        ans = nCr(n,r);
        cout<<"The Answer is: "<<ans;
}
}