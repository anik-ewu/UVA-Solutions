///06-12-2020
///Binary Search

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100005;
ll arr[N];

bool check(int k, int s, int n){
    for(int i=k; i<=n; i++){
        if(arr[i]-arr[i-k]>=s)return true;
    }
    return false;
}

int main(){

    int n, s;
    while(cin>>n>>s){
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            arr[i]=arr[i]+arr[i-1];
        }
        int lo=0;
        int hi=n;

        while((hi-lo)>2){
            int mid=(lo+hi)/2;
            if(check(mid,s, n)){
                hi=mid;
            }
            else{
                lo=mid+1;
            }
        }
        while(hi && check(hi-1,s, n))hi-=1;
        if(check(hi, s, n)==false)hi=0;
        cout<<hi<<endl;
    }
    return 0;
}
