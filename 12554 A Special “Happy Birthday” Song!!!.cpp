///Date : 16-9-2020
///Tag  : Implementation

#include<bits/stdc++.h>
using namespace std;
vector < string > vs;

int main(){

    int n;
    string s;
    cin >> n;
    for (int i=0; i<n; i++){
        cin>>s;
        vs.push_back(s);
    }

    int j=0,k=0, R=12;
    int m=n+(16-(n%16));
    vector< string > v;

    v.push_back("Happy");
    v.push_back("birthday");
    v.push_back("to");
    v.push_back("you");

    for(int i=1; i<=m; i++,k++){
        if(k==n)k=0;
        if(j==4)j=0;
        if(i!=R)cout<<vs[k]<<": "<<v[j++]<<endl;
        if(i==R)cout<<vs[k]<<": Rujia"<<endl,j++,R=R+16;
    }
    return 0;
}
