#include<iostream>
using namespace std;

int main(){
    int n1, n100, n50, n20;
    n1 = n100 = n50= n20 = 0;
    int a; 
    cout<<"Enter the amount: "<<endl;
    cin>>a;
    switch(a>=100){
        case 1: n100 = a/100;
                a -= n100*100;
                break; 
    }
    switch(a>=50)
    {
        case1: n50 = a/50;
               a -= n50*50;       
                break;
    }
    switch(a>=20){
        case 1: n20 = a/20;
                a-=n20*20;
                break;
    }
    switch(a>=1){
        case 1: n1 = a/1;
                a-=n1*1;
                break;
    }
    cout<<"The number of 100RS notes is: "<<n100<<endl;
    cout<<"The number of 50RS notes is: "<<n50<<endl;
    cout<<"The number of 20RS notes is: "<<n20<<endl;
    cout<<"The number of 1RS notes is: "<<n1<<endl;

    cout<<"Therefore the total number of notes are: "<<(n100+n50+n20+n1);
}