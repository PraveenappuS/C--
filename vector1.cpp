#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
    cout<<"Size of the vector is "<<v.size()<<endl;
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> v;
    int s1;
    cin>>s1;
    for (int i=0;  i<s1; i++){
        int x;
        cin>>x; 
        v.push_back(x);
    }
    printvec(v);
}