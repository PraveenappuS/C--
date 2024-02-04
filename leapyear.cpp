#include<iostream>
using namespace std;

bool leapyear(int year){
    if(year%400 == 0||(year%4 ==0 && year%100 != 0)){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    int year;
    cin>>year;

    if(leapyear(year)){
        cout<<year<<" is a leap year."<<endl;
    }
    else{
        cout<<year<<" is not a leap year."<<endl;
    }

}