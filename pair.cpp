#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int, string> p;
    // p = make_pair(2,"pastiwe");
    p = {2, "Pastiwe"};
    pair<int, string> &p1 = p;
    p.first = 4;
    cout<<p.first<<" "<<p.second<<endl;

    
}