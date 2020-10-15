///Greedy
///15.10.2020

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll a, t, n, sum;

    cin>>t;
    while(t--){
        cin>>n;

        vector< int > v;
        for(int i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }

        int cnt=0;
        ll sum=0;
        for(int i=0; i<n-1; i++){
            if(sum+v[i]<v[i+1]){
                sum+=v[i];
                cnt++;
            }
        }
        cout<<cnt+1<<endl;
    }

    return 0;

}
