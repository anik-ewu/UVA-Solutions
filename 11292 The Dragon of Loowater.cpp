///7-12-2020
///Greedy

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

int main(){
    Fast;///using Fast I/O
    ll a,b,c, i,j,k, t,n,m;

    while(cin>>n>>m){
        if(n==0 && m==0)break;

        priority_queue< int >  p,q;
        for(i=1; i<=n; i++){
            cin>>a;
            p.push(-a);
        }
        for(i=1; i<=m; i++){
            cin>>a;
            q.push(-a);
        }
        ll sum=0;
        while(!p.empty() &&  !q.empty()){
            if(p.top()*-1<=q.top()*-1){
                sum+=(q.top()*-1);
                p.pop();
            }
            q.pop();
        }

        if(p.size()){
            cout<<"Loowater is doomed!"<<endl;
        }
        else{
            cout<<sum<<endl;
        }

    }







    return 0;
}


