#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> V){
    cout<<"Size of vector is "<<V.size()<<endl;
    for (int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> V;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        V.push_back(x);
    }
    printvector(V);
}