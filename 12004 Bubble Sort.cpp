///Math
///14-02-2021

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){

    vector < int > v;
    set < int > st;
    map < int, int  > mp;

    for(int i=1; i<=n; i++){
        v.push_back(i);
    }
    int cnt=0;
    int swaps=0;
    do{
        vector < int > va;
        va=v;
        int temp=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                if(va[j]>va[j+1]){
                    swap(va[j], va[j+1]);
                    swaps++;
                    temp++;
                }
            }
        }
        cnt++;
        mp[temp]++;
        st.insert(temp);

    }while(next_permutation(v.begin(),  v.end()));

    cout<<cnt <<' '<<swaps<<endl;
    for(auto i=mp.begin(); i!=mp.end(); i++){
        cout<<i->first<<' '<<i->second<<endl;
    }
}

int main(){

    long long int t, n, cs=1;

    cin>>t;
    while(t--){
        cin>>n;
        //for observing the pattern
        ///pattern(n);

        long long res=(n*(n-1))/2;
        cout<<"Case "<<cs++<<": ";
        if(res%2==0)cout<<res/2<<endl;
        else cout<<res<<"/2"<<endl;
    }

    return 0;
}
