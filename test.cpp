#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

map< int, int >mp;

void solve(){

    ll a,b, n,m, i,j,k;
    cin>>n;

    for(i=2; i<=n; i++){
        k=i;
        cout<<i<<" : ";
        while(k<=n){
            mp[k*i]++;
            k=k*i;
            cout<<k<<' ';
        }
        cout<<endl;
    }
    for(i=2; i<=n; i++){
        if(mp[i]>=2){
            cout<<i<<endl;
        }
    }
}

int main(){
    Fast;///using Fast I/O
    read(x);
    write(x);
    solve();

    return 0;
}

