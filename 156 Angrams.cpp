/*
Date: 28 May 2021
Algo: STL MAP and Sorting required
Idea: Shift the lowercase char into uppercase, sort each word and map their frequency. Also store the original words
in a set to get the sorted order and check their frequency to get result.
*/

#include<bits/stdc++.h>
using namespace std;

map< string , int > mp;

int main(){

    string s;
    set< string > st;

    while(cin>>s){
        if(s=="#")break;
        st.insert(s);
        for(int i=0; i<s.size(); i++){
            if(s[i]>'Z'){
                s[i]=s[i]-'a'+'A';
            }
        }
        sort(s.begin(), s.end());
        mp[s]++;
    }
    for(string s: st){
        string p=s;
        for(int i=0; i<p.size(); i++){
            if(p[i]>'Z'){
                p[i]=p[i]-'a'+'A';
            }
        }
        sort(p.begin(), p.end());
        if(mp[p]==1)
            cout<<s<<endl;
    }

    return 0;
}
