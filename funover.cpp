#include <iostream>
using namespace std;
class cal{
    public:
    static int add(int a, int b){
        return a+b;
    }
    static int add(int a, int b, int c){
        return a+b+c;
    }
};

int main()
{
    cal C;
    int a,b,c;
    cin>>a;
    cin>>b;
    cout<<"The sum of two numbers are: "<<C.add(a, b)<<"\n";
    cin>>c;
    cout<<"The sum of three numbers are: "<<C.add(a, b,c)<<"\n";
}